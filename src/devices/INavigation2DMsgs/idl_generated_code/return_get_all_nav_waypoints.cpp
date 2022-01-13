/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_all_nav_waypoints.h>

// Constructor with field values
return_get_all_nav_waypoints::return_get_all_nav_waypoints(const bool ret,
                                                           const yarp::dev::Nav2D::Map2DPath& waypoints) :
        WirePortable(),
        ret(ret),
        waypoints(waypoints)
{
}

// Read structure on a Wire
bool return_get_all_nav_waypoints::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!nested_read_waypoints(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool return_get_all_nav_waypoints::read(yarp::os::ConnectionReader& connection)
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
bool return_get_all_nav_waypoints::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!nested_write_waypoints(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool return_get_all_nav_waypoints::write(yarp::os::ConnectionWriter& connection) const
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
std::string return_get_all_nav_waypoints::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read ret field
bool return_get_all_nav_waypoints::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write ret field
bool return_get_all_nav_waypoints::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_get_all_nav_waypoints::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write (nested) ret field
bool return_get_all_nav_waypoints::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read waypoints field
bool return_get_all_nav_waypoints::read_waypoints(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(waypoints)) {
        reader.fail();
        return false;
    }
    return true;
}

// write waypoints field
bool return_get_all_nav_waypoints::write_waypoints(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(waypoints)) {
        return false;
    }
    return true;
}

// read (nested) waypoints field
bool return_get_all_nav_waypoints::nested_read_waypoints(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(waypoints)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) waypoints field
bool return_get_all_nav_waypoints::nested_write_waypoints(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(waypoints)) {
        return false;
    }
    return true;
}
