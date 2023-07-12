/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/LaserScan2D.h>

namespace yarp::dev {

// Constructor with field values
LaserScan2D::LaserScan2D(const double angle_min,
                         const double angle_max,
                         const double range_min,
                         const double range_max,
                         const yarp::sig::Vector& scans,
                         const std::int32_t status) :
        WirePortable(),
        angle_min(angle_min),
        angle_max(angle_max),
        range_min(range_min),
        range_max(range_max),
        scans(scans),
        status(status)
{
}

// Read structure on a Wire
bool LaserScan2D::read(yarp::os::idl::WireReader& reader)
{
    if (!read_angle_min(reader)) {
        return false;
    }
    if (!read_angle_max(reader)) {
        return false;
    }
    if (!read_range_min(reader)) {
        return false;
    }
    if (!read_range_max(reader)) {
        return false;
    }
    if (!nested_read_scans(reader)) {
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
bool LaserScan2D::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(6)) {
        return false;
    }
    if (!read(reader)) {
        return false;
    }
    return true;
}

// Write structure on a Wire
bool LaserScan2D::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_angle_min(writer)) {
        return false;
    }
    if (!write_angle_max(writer)) {
        return false;
    }
    if (!write_range_min(writer)) {
        return false;
    }
    if (!write_range_max(writer)) {
        return false;
    }
    if (!nested_write_scans(writer)) {
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
bool LaserScan2D::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) {
        return false;
    }
    if (!write(writer)) {
        return false;
    }
    return true;
}

// Convert to a printable string
std::string LaserScan2D::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read angle_min field
bool LaserScan2D::read_angle_min(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(angle_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write angle_min field
bool LaserScan2D::write_angle_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_min)) {
        return false;
    }
    return true;
}

// read (nested) angle_min field
bool LaserScan2D::nested_read_angle_min(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(angle_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) angle_min field
bool LaserScan2D::nested_write_angle_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_min)) {
        return false;
    }
    return true;
}

// read angle_max field
bool LaserScan2D::read_angle_max(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(angle_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write angle_max field
bool LaserScan2D::write_angle_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_max)) {
        return false;
    }
    return true;
}

// read (nested) angle_max field
bool LaserScan2D::nested_read_angle_max(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(angle_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) angle_max field
bool LaserScan2D::nested_write_angle_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_max)) {
        return false;
    }
    return true;
}

// read range_min field
bool LaserScan2D::read_range_min(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(range_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write range_min field
bool LaserScan2D::write_range_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_min)) {
        return false;
    }
    return true;
}

// read (nested) range_min field
bool LaserScan2D::nested_read_range_min(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(range_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) range_min field
bool LaserScan2D::nested_write_range_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_min)) {
        return false;
    }
    return true;
}

// read range_max field
bool LaserScan2D::read_range_max(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(range_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write range_max field
bool LaserScan2D::write_range_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_max)) {
        return false;
    }
    return true;
}

// read (nested) range_max field
bool LaserScan2D::nested_read_range_max(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(range_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) range_max field
bool LaserScan2D::nested_write_range_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_max)) {
        return false;
    }
    return true;
}

// read scans field
bool LaserScan2D::read_scans(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(scans)) {
        reader.fail();
        return false;
    }
    return true;
}

// write scans field
bool LaserScan2D::write_scans(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(scans)) {
        return false;
    }
    return true;
}

// read (nested) scans field
bool LaserScan2D::nested_read_scans(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(scans)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) scans field
bool LaserScan2D::nested_write_scans(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(scans)) {
        return false;
    }
    return true;
}

// read status field
bool LaserScan2D::read_status(yarp::os::idl::WireReader& reader)
{
    if (!reader.readI32(status)) {
        status = 3;
    }
    return true;
}

// write status field
bool LaserScan2D::write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(status)) {
        return false;
    }
    return true;
}

// read (nested) status field
bool LaserScan2D::nested_read_status(yarp::os::idl::WireReader& reader)
{
    if (!reader.readI32(status)) {
        status = 3;
    }
    return true;
}

// write (nested) status field
bool LaserScan2D::nested_write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(status)) {
        return false;
    }
    return true;
}

} // namespace yarp::dev
