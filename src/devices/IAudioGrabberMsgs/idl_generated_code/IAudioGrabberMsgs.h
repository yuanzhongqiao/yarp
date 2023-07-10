/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_IAUDIOGRABBERMSGS_H
#define YARP_THRIFT_GENERATOR_SERVICE_IAUDIOGRABBERMSGS_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <IAudioGrabberMsgs_common.h>
#include <return_getRecordingAudioBufferCurrentSize.h>
#include <return_getRecordingAudioBufferMaxSize.h>
#include <return_getSound.h>
#include <return_isRecording.h>

class IAudioGrabberMsgs :
        public yarp::os::Wire
{
public:
    // Constructor
    IAudioGrabberMsgs();

    virtual bool setHWGain_RPC(const double gain);

    virtual bool setSWGain_RPC(const double gain);

    virtual bool resetRecordingAudioBuffer_RPC();

    virtual bool startRecording_RPC();

    virtual bool stopRecording_RPC();

    virtual return_isRecording isRecording_RPC();

    virtual return_getSound getSound(const size_t min_number_of_samples, const size_t max_number_of_samples, const double max_samples_timeout_s);

    virtual return_getRecordingAudioBufferMaxSize getRecordingAudioBufferMaxSize();

    virtual return_getRecordingAudioBufferCurrentSize getRecordingAudioBufferCurrentSize();

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_IAUDIOGRABBERMSGS_H
