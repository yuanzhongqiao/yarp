/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_getAllTransforms.h>

// Constructor with field values
return_getAllTransforms::return_getAllTransforms(const bool retvalue,
                                                 const std::vector<yarp::math::FrameTransform>& transforms_list) :
        WirePortable(),
        retvalue(retvalue),
        transforms_list(transforms_list)
{
}

// Read structure on a Wire
bool return_getAllTransforms::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retvalue(reader)) {
        return false;
    }
    if (!read_transforms_list(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool return_getAllTransforms::read(yarp::os::ConnectionReader& connection)
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
bool return_getAllTransforms::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retvalue(writer)) {
        return false;
    }
    if (!write_transforms_list(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool return_getAllTransforms::write(yarp::os::ConnectionWriter& connection) const
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
std::string return_getAllTransforms::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read retvalue field
bool return_getAllTransforms::read_retvalue(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(retvalue)) {
        reader.fail();
        return false;
    }
    return true;
}

// write retvalue field
bool return_getAllTransforms::write_retvalue(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retvalue)) {
        return false;
    }
    return true;
}

// read (nested) retvalue field
bool return_getAllTransforms::nested_read_retvalue(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(retvalue)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) retvalue field
bool return_getAllTransforms::nested_write_retvalue(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retvalue)) {
        return false;
    }
    return true;
}

// read transforms_list field
bool return_getAllTransforms::read_transforms_list(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    transforms_list.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    transforms_list.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(transforms_list[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write transforms_list field
bool return_getAllTransforms::write_transforms_list(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(transforms_list.size()))) {
        return false;
    }
    for (const auto& _item : transforms_list) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) transforms_list field
bool return_getAllTransforms::nested_read_transforms_list(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    transforms_list.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    transforms_list.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(transforms_list[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) transforms_list field
bool return_getAllTransforms::nested_write_transforms_list(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(transforms_list.size()))) {
        return false;
    }
    for (const auto& _item : transforms_list) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}
