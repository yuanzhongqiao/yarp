/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_getStatus.h>

// Constructor with field values
return_getStatus::return_getStatus(const bool result,
                                   const std::string& status) :
        WirePortable(),
        result(result),
        status(status)
{
}

// Read structure on a Wire
bool return_getStatus::read(yarp::os::idl::WireReader& reader)
{
    if (!read_result(reader)) {
        return false;
    }
    if (!read_status(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool return_getStatus::read(yarp::os::ConnectionReader& connection)
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
bool return_getStatus::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_result(writer)) {
        return false;
    }
    if (!write_status(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool return_getStatus::write(yarp::os::ConnectionWriter& connection) const
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
std::string return_getStatus::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read result field
bool return_getStatus::read_result(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(result)) {
        reader.fail();
        return false;
    }
    return true;
}

// write result field
bool return_getStatus::write_result(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(result)) {
        return false;
    }
    return true;
}

// read (nested) result field
bool return_getStatus::nested_read_result(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(result)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) result field
bool return_getStatus::nested_write_result(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(result)) {
        return false;
    }
    return true;
}

// read status field
bool return_getStatus::read_status(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(status)) {
        reader.fail();
        return false;
    }
    return true;
}

// write status field
bool return_getStatus::write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(status)) {
        return false;
    }
    return true;
}

// read (nested) status field
bool return_getStatus::nested_read_status(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(status)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) status field
bool return_getStatus::nested_write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(status)) {
        return false;
    }
    return true;
}
