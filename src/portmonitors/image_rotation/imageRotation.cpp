/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "imageRotation.h"

#include <algorithm>
#include <cmath>

#include <yarp/os/LogComponent.h>
#include <yarp/os/LogStream.h>
#include <yarp/sig/Image.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio/videoio.hpp>

using namespace yarp::os;
using namespace yarp::sig;

namespace {
YARP_LOG_COMPONENT(IMAGEROTATION,
                   "yarp.carrier.portmonitor.image_rotation",
                   yarp::os::Log::minimumPrintLevel(),
                   yarp::os::Log::LogTypeReserved,
                   yarp::os::Log::printCallback(),
                   nullptr)
}

bool ImageRotation::create(const yarp::os::Property& options)
{
    //parse the user parameters
    yarp::os::Property m_user_params;
    yCDebug(IMAGEROTATION) << "user params:" << options.toString();
    std::string str = options.find("carrier").asString();
    getParamsFromCommandLine(str, m_user_params);
    yCDebug(IMAGEROTATION) << "parsed params:" << m_user_params.toString();

    if (m_user_params.check("options_rotate"))
    {
        m_options_rotate_str = m_user_params.find("options_rotate").asString();
    }
    if (m_options_rotate_str == std::string("rotate_cw"))
    {
        m_rot_flags = cv::ROTATE_90_CLOCKWISE;
    }
    else if (m_options_rotate_str == std::string("rotate_ccw"))
    {
        m_rot_flags = cv::ROTATE_90_COUNTERCLOCKWISE;
    }
    else
   {
        yCDebug(IMAGEROTATION) << "Invalid value of `options` parameter";
        return false;
    }
    return true;
}

void ImageRotation::destroy()
{
}

void split(const std::string& s, char delim, std::vector<std::string>& elements)
{
    std::istringstream iss(s);
    std::string item;
    while (std::getline(iss, item, delim)) {
        elements.push_back(item);
    }
}

void ImageRotation::getParamsFromCommandLine(std::string carrierString, yarp::os::Property& prop)
{
    // Split command line string using '+' delimiter
    std::vector<std::string> parameters;
    split(carrierString, '+', parameters);

    // Iterate over result strings
    for (std::string param : parameters)
    {
        // If there is no '.', then the param is bad formatted, skip it.
        auto pointPosition = param.find('.');
        if (pointPosition == std::string::npos)
        {
            continue;
        }

        // Otherwise, separate key and value
        std::string paramKey = param.substr(0, pointPosition);
        yarp::os::Value paramValue;
        std::string s = param.substr(pointPosition + 1, param.length());
        paramValue.fromString(s.c_str());

        //and append to the returned property
        prop.put(paramKey, paramValue);
    }
    return;
}

bool ImageRotation::setparam(const yarp::os::Property& params)
{
    return false;
}

bool ImageRotation::getparam(yarp::os::Property& params)
{
    return false;
}

bool ImageRotation::accept(yarp::os::Things& thing)
{
    auto* img = thing.cast_as<yarp::sig::Image>();
    if(img == nullptr)
    {
        yCError(IMAGEROTATION, "Expected type Image, but got wrong data type!");
        return false;
    }
    if (img->getPixelCode() != VOCAB_PIXEL_RGB &&
        img->getPixelCode() != VOCAB_PIXEL_MONO_FLOAT)
    {
        yCError(IMAGEROTATION, "Received image with invalid/unsupported pixelCode!");
        return false;
    }
    return true;
}

yarp::os::Things& ImageRotation::update(yarp::os::Things& thing)
{
    yarp::sig::Image* yarpimg = thing.cast_as<yarp::sig::Image >();
    if (yarpimg->getPixelCode() == VOCAB_PIXEL_RGB)
    {
        m_cvInImage = yarp::cv::toCvMat(*yarpimg);

        m_outImgRgb.resize(yarpimg->width(), yarpimg->height());
        m_outImgRgb.zero();

        //double angle = 90;
        //cv::Point2f center((yarpimg->width() - 1) / 2.0, (yarpimg->height() - 1) / 2.0);
        //cv::Mat rotation_matix = getRotationMatrix2D(center, angle, 1.0);
        //cv::warpAffine(cvInImage, cvOutImage, rotation_matix, cvInImage.size());

        cv::rotate(m_cvInImage, m_cvOutImage, m_rot_flags);

        m_outImgRgb = yarp::cv::fromCvMat<yarp::sig::PixelRgb>(m_cvOutImage);
        m_th.setPortWriter(&m_outImgRgb);
    }
    else if (yarpimg->getPixelCode() == VOCAB_PIXEL_MONO_FLOAT)
    {
        m_cvInImage = yarp::cv::toCvMat(*yarpimg);

        m_outImgFloat.resize(yarpimg->width(), yarpimg->height());
        m_outImgFloat.zero();

        //double angle = 90;
        //cv::Point2f center((yarpimg->width() - 1) / 2.0, (yarpimg->height() - 1) / 2.0);
        //cv::Mat rotation_matix = getRotationMatrix2D(center, angle, 1.0);
        //cv::warpAffine(cvInImage, cvOutImage, rotation_matix, cvInImage.size());

        cv::rotate(m_cvInImage, m_cvOutImage, m_rot_flags);

        m_outImgFloat = yarp::cv::fromCvMat<yarp::sig::PixelFloat>(m_cvOutImage);
        m_th.setPortWriter(&m_outImgFloat);
    }
    else
    {
        yCError(IMAGEROTATION, "Invalid Image type!");
    }
    return m_th;
}
