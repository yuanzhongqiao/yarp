/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_FRAMETRANSFORMSTORAGESETRPC_H
#define YARP_THRIFT_GENERATOR_SERVICE_FRAMETRANSFORMSTORAGESETRPC_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <yarp/math/FrameTransform.h>

class FrameTransformStorageSetRPC :
        public yarp::os::Wire
{
public:
    // Constructor
    FrameTransformStorageSetRPC();

    virtual bool setTransforms(const std::vector<yarp::math::FrameTransform>& transforms);

    virtual bool setTransform(const yarp::math::FrameTransform& transform);

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_FRAMETRANSFORMSTORAGESETRPC_H
