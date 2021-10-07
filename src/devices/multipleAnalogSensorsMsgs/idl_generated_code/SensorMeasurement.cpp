/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <SensorMeasurement.h>

// Constructor with field values
SensorMeasurement::SensorMeasurement(const yarp::sig::Vector& measurement,
                                     const double timestamp) :
        WirePortable(),
        measurement(measurement),
        timestamp(timestamp)
{
}

// Read structure on a Wire
bool SensorMeasurement::read(yarp::os::idl::WireReader& reader)
{
    if (!nested_read_measurement(reader)) {
        return false;
    }
    if (!read_timestamp(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool SensorMeasurement::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool SensorMeasurement::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!nested_write_measurement(writer)) {
        return false;
    }
    if (!write_timestamp(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool SensorMeasurement::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string SensorMeasurement::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
SensorMeasurement::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new SensorMeasurement;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
SensorMeasurement::Editor::Editor(SensorMeasurement& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
SensorMeasurement::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool SensorMeasurement::Editor::edit(SensorMeasurement& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool SensorMeasurement::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
SensorMeasurement& SensorMeasurement::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void SensorMeasurement::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void SensorMeasurement::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: measurement setter
void SensorMeasurement::Editor::set_measurement(const yarp::sig::Vector& measurement)
{
    will_set_measurement();
    obj->measurement = measurement;
    mark_dirty_measurement();
    communicate();
    did_set_measurement();
}

// Editor: measurement getter
const yarp::sig::Vector& SensorMeasurement::Editor::get_measurement() const
{
    return obj->measurement;
}

// Editor: measurement will_set
bool SensorMeasurement::Editor::will_set_measurement()
{
    return true;
}

// Editor: measurement did_set
bool SensorMeasurement::Editor::did_set_measurement()
{
    return true;
}

// Editor: timestamp setter
void SensorMeasurement::Editor::set_timestamp(const double timestamp)
{
    will_set_timestamp();
    obj->timestamp = timestamp;
    mark_dirty_timestamp();
    communicate();
    did_set_timestamp();
}

// Editor: timestamp getter
double SensorMeasurement::Editor::get_timestamp() const
{
    return obj->timestamp;
}

// Editor: timestamp will_set
bool SensorMeasurement::Editor::will_set_timestamp()
{
    return true;
}

// Editor: timestamp did_set
bool SensorMeasurement::Editor::did_set_timestamp()
{
    return true;
}

// Editor: clean
void SensorMeasurement::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool SensorMeasurement::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "measurement") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("yarp::sig::Vector measurement")) {
                    return false;
                }
            }
            if (field == "timestamp") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double timestamp")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(3)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("measurement");
        writer.writeString("timestamp");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "measurement") {
            will_set_measurement();
            if (!obj->nested_read_measurement(reader)) {
                return false;
            }
            did_set_measurement();
        } else if (key == "timestamp") {
            will_set_timestamp();
            if (!obj->nested_read_timestamp(reader)) {
                return false;
            }
            did_set_timestamp();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab32('o', 'k');
    return true;
}

// Editor: write
bool SensorMeasurement::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_measurement) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("measurement")) {
            return false;
        }
        if (!obj->nested_write_measurement(writer)) {
            return false;
        }
    }
    if (is_dirty_timestamp) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("timestamp")) {
            return false;
        }
        if (!obj->nested_write_timestamp(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void SensorMeasurement::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void SensorMeasurement::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: measurement mark_dirty
void SensorMeasurement::Editor::mark_dirty_measurement()
{
    if (is_dirty_measurement) {
        return;
    }
    dirty_count++;
    is_dirty_measurement = true;
    mark_dirty();
}

// Editor: timestamp mark_dirty
void SensorMeasurement::Editor::mark_dirty_timestamp()
{
    if (is_dirty_timestamp) {
        return;
    }
    dirty_count++;
    is_dirty_timestamp = true;
    mark_dirty();
}

// Editor: dirty_flags
void SensorMeasurement::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_measurement = flag;
    is_dirty_timestamp = flag;
    dirty_count = flag ? 2 : 0;
}

// read measurement field
bool SensorMeasurement::read_measurement(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(measurement)) {
        reader.fail();
        return false;
    }
    return true;
}

// write measurement field
bool SensorMeasurement::write_measurement(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(measurement)) {
        return false;
    }
    return true;
}

// read (nested) measurement field
bool SensorMeasurement::nested_read_measurement(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(measurement)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) measurement field
bool SensorMeasurement::nested_write_measurement(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(measurement)) {
        return false;
    }
    return true;
}

// read timestamp field
bool SensorMeasurement::read_timestamp(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(timestamp)) {
        reader.fail();
        return false;
    }
    return true;
}

// write timestamp field
bool SensorMeasurement::write_timestamp(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(timestamp)) {
        return false;
    }
    return true;
}

// read (nested) timestamp field
bool SensorMeasurement::nested_read_timestamp(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(timestamp)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) timestamp field
bool SensorMeasurement::nested_write_timestamp(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(timestamp)) {
        return false;
    }
    return true;
}
