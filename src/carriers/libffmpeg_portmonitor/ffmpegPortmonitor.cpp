#include "ffmpegPortmonitor.h"

#include <yarp/os/LogComponent.h>
#include <yarp/sig/all.h>

#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>

extern "C" {
    //#include "zfp.h"
    #include <libavcodec/codec.h>
    #include <libavcodec/avcodec.h>
    #include <libavutil/opt.h>
    #include <libavutil/imgutils.h>
    #include <libavformat/avformat.h>
    #include <libswscale/swscale.h>
}

using namespace yarp::os;
using namespace yarp::sig;
using namespace std;

namespace {
YARP_LOG_COMPONENT(FFMPEGMONITOR,
                   "yarp.carrier.portmonitor.ffmpeg",
                   yarp::os::Log::minimumPrintLevel(),
                   yarp::os::Log::LogTypeReserved,
                   yarp::os::Log::printCallback(),
                   nullptr)
}


bool FfmpegMonitorObject::create(const yarp::os::Property& options)
{
    senderSide = (options.find("sender_side").asBool());
    
    // TODO: grab desired codec from command line
    
    AVCodecID codec = AV_CODEC_ID_H264; // AV_CODEC_ID_H264 - AV_CODEC_ID_MPEG2VIDEO
    if (senderSide) {
        codecSender = avcodec_find_encoder(codec);
        if (!codecSender) {
            yCError(FFMPEGMONITOR, "Can't find codec %s", "");
            return false;
        }
        cSender = avcodec_alloc_context3(codecSender);
        if (!cSender) {
            yCError(FFMPEGMONITOR, "Could not allocate video codec context");
            return false;
        }
        firstTimeSender = true;

    } else {
        codecReceiver = avcodec_find_decoder(codec);
        if (!codecReceiver) {
            yCError(FFMPEGMONITOR, "Can't find codec %s", "");
            return -1;
        }
        cReceiver = avcodec_alloc_context3(codecReceiver);
        if (!cReceiver) {
            yCError(FFMPEGMONITOR, "Could not allocate video codec context");
            return -1;
        }
        firstTimeReceiver = true;
    }

    // Pixel formats map
    pixelMap[VOCAB_PIXEL_RGB] = AV_PIX_FMT_RGB24;
    pixelMap[VOCAB_PIXEL_RGBA] = AV_PIX_FMT_RGBA;
    pixelMap[VOCAB_PIXEL_BGR] = AV_PIX_FMT_BGR24;
    pixelMap[VOCAB_PIXEL_BGRA] = AV_PIX_FMT_BGRA;
    pixelMap[VOCAB_PIXEL_YUV_420] = AV_PIX_FMT_YUV420P;
    codecPixelMap[AV_CODEC_ID_H264] = AV_PIX_FMT_YUV420P;
    codecPixelMap[AV_CODEC_ID_H265] = AV_PIX_FMT_YUV420P;
    codecPixelMap[AV_CODEC_ID_MPEG2VIDEO] = AV_PIX_FMT_YUV420P;

    return true;
}

void FfmpegMonitorObject::destroy(void)
{
    // if (senderSide) {
    //     avcodec_free_context(&cSender);
    // } else {
    //     avcodec_free_context(&cReceiver);
    // }
}

bool FfmpegMonitorObject::setparam(const yarp::os::Property& params)
{
    yCError(FFMPEGMONITOR, "setparam");
    return false;
}

bool FfmpegMonitorObject::getparam(yarp::os::Property& params)
{
    yCError(FFMPEGMONITOR, "getparam");
    return false;
}

bool FfmpegMonitorObject::accept(yarp::os::Things& thing)
{
    if (senderSide) {
        yCError(FFMPEGMONITOR, "accept - sender");
        Image* img = thing.cast_as< Image >();
        if(img == nullptr) {
            yCError(FFMPEGMONITOR, "Expected type Image in sender side, but got wrong data type!");
            return false;
        }        
    }
    else {
        yCError(FFMPEGMONITOR, "accept - receiver");
        Bottle* bt = thing.cast_as<Bottle>();
        if(bt == nullptr){
            yCError(FFMPEGMONITOR, "Expected type Bottle in receiver side, but got wrong data type!");
            return false;
        }
    }
    return true;
}

yarp::os::Things& FfmpegMonitorObject::update(yarp::os::Things& thing)
{
    if (senderSide) {
        yCError(FFMPEGMONITOR, "update - sender");
        Image* img = thing.cast_as< Image >();
        AVPacket *packet = new AVPacket;
        bool ok = true;
        if (compress(img, packet) != 0) {
            yCError(FFMPEGMONITOR, "Error in compression");
            ok = false;
        }

        // Insert compressed image into a Bottle to be sent
        data.clear();
        if (!ok) {
            data.addInt(0);
        } else {
            data.addInt(1);
            data.addInt32(img->width());
            data.addInt32(img->height());
            data.addInt32(img->getPixelCode());
            data.addInt32(img->getPixelSize());  
            Value p(packet, sizeof(*packet));
            data.add(p);
            Value d(packet->data, packet->size);
            data.add(d);
            data.addInt(packet->buf->size);
            Value bd(packet->buf->data, packet->buf->size);
            data.add(bd);
            if (packet->side_data_elems > 0) {
                data.addInt(packet->side_data->size);
                data.addInt(packet->side_data->type);
                Value sd(packet->side_data->data, packet->side_data->size);
                data.add(sd);
            }
        }
        th.setPortWriter(&data);
    }
    else {
        yCError(FFMPEGMONITOR, "update - receiver");
        Bottle* compressedBottle = thing.cast_as<Bottle>();

        int ok = compressedBottle->get(0).asInt();
        if (ok == 0) {
            imageOut.zero();
        } else {
            // Get compressed image from Bottle and decompress
            int width = compressedBottle->get(1).asInt32();
            int height = compressedBottle->get(2).asInt32();
            int pixelCode = compressedBottle->get(3).asInt32();
            int pixelSize = compressedBottle->get(4).asInt32();
            AVPacket* tmp = (AVPacket*) compressedBottle->get(5).asBlob();
            AVPacket * packet = av_packet_alloc();
            packet->convergence_duration = tmp->convergence_duration;
            packet->dts = tmp->dts;
            packet->duration = tmp->duration;
            packet->flags = tmp->flags;
            packet->pos = tmp->pos;
            packet->pts = tmp->pts;
            packet->side_data_elems = tmp->side_data_elems;
            packet->stream_index = tmp->stream_index;
            packet->size = tmp->size;
            packet->data = (uint8_t *) compressedBottle->get(6).asBlob();
            packet->buf = av_buffer_create((uint8_t *) compressedBottle->get(8).asBlob(),
                                            compressedBottle->get(7).asInt(), av_buffer_default_free,
                                            nullptr, AV_BUFFER_FLAG_READONLY);
            // packet->buf->size = compressedBottle->get(7).asInt();
            // packet->buf->data = (uint8_t *) compressedBottle->get(8).asBlob();
            
            if (packet->side_data_elems > 0) {
                packet->side_data = new AVPacketSideData;
                packet->side_data->size = compressedBottle->get(9).asInt();
                packet->side_data->type = (AVPacketSideDataType) compressedBottle->get(10).asInt();
                packet->side_data->data = (uint8_t *) compressedBottle->get(11).asBlob();
                
                // uint8_t * dataArray = (uint8_t *) av_malloc(compressedBottle->get(9).asInt());
                // memcpy(dataArray, (uint8_t *) compressedBottle->get(11).asBlob(), compressedBottle->get(9).asInt());
                // av_packet_add_side_data(packet, (AVPacketSideDataType) compressedBottle->get(10).asInt(),
                //                         dataArray, compressedBottle->get(9).asInt());

            }
                        
            unsigned char* decompressed;
            int sizeDecompressed;
            bool ok = true;
            if (decompress(packet, &decompressed, &sizeDecompressed, width, height, pixelCode) != 0) {
                yCError(FFMPEGMONITOR, "Error in decompression");
                ok = false;
            }

            imageOut.zero();
            if (ok) {
                imageOut.setPixelCode(pixelCode);
                imageOut.setPixelSize(pixelSize);
                imageOut.resize(width, height);
                memcpy(imageOut.getRawImage(), decompressed, sizeDecompressed);
            }
        }
        th.setPortWriter(&imageOut);
    }
    return th;
}

int FfmpegMonitorObject::compress(Image* img, AVPacket *pkt) {
    
    yCError(FFMPEGMONITOR, "compress");
    AVFrame *startFrame;
    AVFrame *endFrame;

    int w = img->width();
    int h = img->height();

    // Allocate video frame for original frames
    startFrame = av_frame_alloc();
    if (startFrame == NULL)
        return -1;

    // Allocate an video frame for end frame
    endFrame = av_frame_alloc();
    if (endFrame == NULL)
        return -1;

    int success = av_image_alloc(startFrame->data, startFrame->linesize,
                    w, h,
                    (AVPixelFormat) pixelMap[img->getPixelCode()], 16);

    startFrame->linesize[0] = img->getRowSize();
    startFrame->data[0] = img->getRawImage();
    startFrame->height = h;
    startFrame->width = w;
    startFrame->format = (AVPixelFormat) pixelMap[img->getPixelCode()];

    success = av_image_alloc(endFrame->data, endFrame->linesize,
                    w, h,
                    (AVPixelFormat) codecPixelMap[cSender->codec_id], 16);
    
    endFrame->height = h;
    endFrame->width = w;
    endFrame->format = (AVPixelFormat) codecPixelMap[cSender->codec_id];

    // Convert the image into end format
    static struct SwsContext *img_convert_ctx;
    
    img_convert_ctx = sws_getContext(w, h, 
                                        (AVPixelFormat) pixelMap[img->getPixelCode()], 
                                        w, h,
                                        (AVPixelFormat) codecPixelMap[cSender->codec_id],
                                        SWS_BICUBIC,
                                        NULL, NULL, NULL);
    if (img_convert_ctx == NULL) {
        yCError(FFMPEGMONITOR, "Cannot initialize the YUV conversion context!");
        return -1;
    }
    
    int ret = sws_scale(img_convert_ctx, startFrame->data, startFrame->linesize, 0, 
                        h, endFrame->data, endFrame->linesize);

    pkt->data = NULL;
    pkt->size = 0;
    av_init_packet(pkt);
    if (!&pkt) {
        yCError(FFMPEGMONITOR, "Could not allocate packet");
        return -1;
    }

    if (firstTimeSender) {
        cSender->width = w;
        cSender->height = h;
        
        // Parameters
        cSender->bit_rate = 400000;
        cSender->time_base = (AVRational){1, 25};
        cSender->framerate = (AVRational){25, 1};
        cSender->gop_size = 10;
        cSender->max_b_frames = 1;
        
        cSender->pix_fmt = (AVPixelFormat) codecPixelMap[cSender->codec_id];

        ret = avcodec_open2(cSender, codecSender, NULL);
        if (ret < 0) {
            yCError(FFMPEGMONITOR, "Could not open codec");
            return -1;
        }
        firstTimeSender = false;
    }

    startFrame->pts = cSender->frame_number;

    ret = avcodec_send_frame(cSender, endFrame);
    if (ret < 0) {
        yCError(FFMPEGMONITOR, "Error sending a frame for encoding");
        return -1;
    }

    ret = avcodec_receive_packet(cSender, pkt);
    if (ret == AVERROR(EAGAIN)) {
        yCError(FFMPEGMONITOR, "Error EAGAIN");
        return -1;
    }
    else if (ret == AVERROR_EOF) {
        yCError(FFMPEGMONITOR, "Error EOF");
        return -1;
    }
    else if (ret < 0) {
        yCError(FFMPEGMONITOR, "Error during encoding");
        return -1;
    }

    return 0;
}

int FfmpegMonitorObject::decompress(AVPacket* pkt, unsigned char** decompressed, int* sizeDecompressed,
                                    int w, int h, int pixelCode) {
    
    yCError(FFMPEGMONITOR, "decompress");
    AVFrame *startFrame;
    AVFrame *endFrame;

    if (firstTimeReceiver) {
        cReceiver->width = w;
        cReceiver->height = h;
        
        // Parameters
        cReceiver->bit_rate = 400000;
        cReceiver->time_base = (AVRational){1, 25};
        cReceiver->framerate = (AVRational){25, 1};
        cReceiver->gop_size = 10;
        cReceiver->max_b_frames = 1;
        
        cReceiver->pix_fmt = (AVPixelFormat) codecPixelMap[cReceiver->codec_id];

        // Allocate video frame
        startFrame = av_frame_alloc();
        if (startFrame == NULL)
            return -1;

        int ret = avcodec_open2(cReceiver, codecReceiver, NULL);
        if (ret < 0) {
            yCError(FFMPEGMONITOR, "Could not open codec");
            return -1;
        }
    }

    int ret = avcodec_send_packet(cReceiver, pkt);
    if (ret < 0) {
        yCError(FFMPEGMONITOR, "Error sending a frame for encoding");
        return -1;
    }

    ret = avcodec_receive_frame(cReceiver, startFrame);
    if (ret == AVERROR(EAGAIN)) {
        yCError(FFMPEGMONITOR, "Error EAGAIN");
        return -1;
    }
    else if (ret == AVERROR_EOF) {
        yCError(FFMPEGMONITOR, "Error EOF");
        return -1;
    }
    else if (ret < 0) {
        yCError(FFMPEGMONITOR, "Error during encoding");
        return -1;
    }
    
    // Allocate a video frame for end frame
    endFrame = av_frame_alloc();
    if (endFrame == NULL)
        return -1;


    int success = av_image_alloc(endFrame->data, endFrame->linesize,
                    w, h,
                    (AVPixelFormat) pixelMap[pixelCode], 16);
    
    if (success < 0) {
        yCError(FFMPEGMONITOR, "Error allocating frame!");
        return -1;
    }

    endFrame->height = h;
    endFrame->width = w;
    endFrame->format = (AVPixelFormat) pixelMap[pixelCode];

    // Convert the image into RGB format
    static struct SwsContext *img_convert_ctx;
    
    img_convert_ctx = sws_getContext(w, h, 
                                        (AVPixelFormat) codecPixelMap[cReceiver->codec_id], 
                                        w, h,
                                        (AVPixelFormat) pixelMap[pixelCode],
                                        SWS_BICUBIC,
                                        NULL, NULL, NULL);
    if (img_convert_ctx == NULL) {
        yCError(FFMPEGMONITOR, "Cannot initialize the YUV conversion context!");
        return -1;
    }
    
    ret = sws_scale(img_convert_ctx, startFrame->data, startFrame->linesize, 0, 
                        h, endFrame->data, endFrame->linesize);


    *decompressed = endFrame->data[0];
    *sizeDecompressed = success;

    return 0;

}

int FfmpegMonitorObject::save_frame_as_jpeg(AVCodecContext *pCodecCtx, AVFrame *pFrame, int FrameNo, const char* filename) {

    AVCodec *jpegCodec = avcodec_find_encoder(AV_CODEC_ID_JPEG2000);
    if (!jpegCodec) {
        return -1;
    }

    AVCodecContext *jpegContext = avcodec_alloc_context3(jpegCodec);
    if (!jpegContext) {
        return -1;
    }

    jpegContext->pix_fmt = pCodecCtx->pix_fmt;
    jpegContext->height = pFrame->height;
    jpegContext->width = pFrame->width;

    jpegContext->time_base = pCodecCtx->time_base;
    jpegContext->framerate = pCodecCtx->framerate;

    if (avcodec_open2(jpegContext, jpegCodec, NULL) < 0) {
        return -1;
    }

    FILE *JPEGFile;
    char JPEGFName[256];

    AVPacket packet1;
    packet1.data = NULL;
    packet1.size = 0;
    av_init_packet(&packet1);
    int gotFrame;

    int ret = avcodec_send_frame(jpegContext, pFrame);
    
    if (ret == 0)
    {
        ret = avcodec_receive_packet(jpegContext, &packet1);
        if (ret != 0)
        {
            return -1;
        }
    } else {
        return -1;
    }

    sprintf(JPEGFName, "%s-%d", filename, FrameNo);
    JPEGFile = fopen(JPEGFName, "wb");
    fwrite(packet1.data, 1, packet1.size, JPEGFile);
    fclose(JPEGFile);

    av_packet_unref(&packet1);
    avcodec_close(jpegContext);
    return 0;
}

