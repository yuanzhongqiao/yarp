/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_estimated_poses.h>

// Constructor with field values
return_get_estimated_poses::return_get_estimated_poses(const bool ret,
                                                       const std::vector<yarp::dev::Nav2D::Map2DLocation>& poses) :
        WirePortable(),
        ret(ret),
        poses(poses)
{
}

// Read structure on a Wire
bool return_get_estimated_poses::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!read_poses(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool return_get_estimated_poses::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    if (!read(reader)) {
        return false;
    }
    return true;
}

// Write structure on a Wire
bool return_get_estimated_poses::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!write_poses(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool return_get_estimated_poses::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!write(writer)) {
        return false;
    }
    return true;
}

// Convert to a printable string
std::string return_get_estimated_poses::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read ret field
bool return_get_estimated_poses::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write ret field
bool return_get_estimated_poses::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_get_estimated_poses::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write (nested) ret field
bool return_get_estimated_poses::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read poses field
bool return_get_estimated_poses::read_poses(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    poses.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    poses.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(poses[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write poses field
bool return_get_estimated_poses::write_poses(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) {
        return false;
    }
    for (const auto& _item : poses) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) poses field
bool return_get_estimated_poses::nested_read_poses(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    poses.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    poses.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(poses[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) poses field
bool return_get_estimated_poses::nested_write_poses(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) {
        return false;
    }
    for (const auto& _item : poses) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}
