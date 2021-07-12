/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <SensorStreamingData.h>

// Default constructor
SensorStreamingData::SensorStreamingData() :
        WirePortable(),
        ThreeAxisGyroscopes(),
        ThreeAxisLinearAccelerometers(),
        ThreeAxisMagnetometers(),
        OrientationSensors(),
        TemperatureSensors(),
        SixAxisForceTorqueSensors(),
        ContactLoadCellArrays(),
        EncoderArrays(),
        SkinPatches(),
        PositionSensors()
{
}

// Constructor with field values
SensorStreamingData::SensorStreamingData(const SensorMeasurements& ThreeAxisGyroscopes,
                                         const SensorMeasurements& ThreeAxisLinearAccelerometers,
                                         const SensorMeasurements& ThreeAxisMagnetometers,
                                         const SensorMeasurements& OrientationSensors,
                                         const SensorMeasurements& TemperatureSensors,
                                         const SensorMeasurements& SixAxisForceTorqueSensors,
                                         const SensorMeasurements& ContactLoadCellArrays,
                                         const SensorMeasurements& EncoderArrays,
                                         const SensorMeasurements& SkinPatches,
                                         const SensorMeasurements& PositionSensors) :
        WirePortable(),
        ThreeAxisGyroscopes(ThreeAxisGyroscopes),
        ThreeAxisLinearAccelerometers(ThreeAxisLinearAccelerometers),
        ThreeAxisMagnetometers(ThreeAxisMagnetometers),
        OrientationSensors(OrientationSensors),
        TemperatureSensors(TemperatureSensors),
        SixAxisForceTorqueSensors(SixAxisForceTorqueSensors),
        ContactLoadCellArrays(ContactLoadCellArrays),
        EncoderArrays(EncoderArrays),
        SkinPatches(SkinPatches),
        PositionSensors(PositionSensors)
{
}

// Read structure on a Wire
bool SensorStreamingData::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ThreeAxisGyroscopes(reader)) {
        return false;
    }
    if (!read_ThreeAxisLinearAccelerometers(reader)) {
        return false;
    }
    if (!read_ThreeAxisMagnetometers(reader)) {
        return false;
    }
    if (!read_OrientationSensors(reader)) {
        return false;
    }
    if (!read_TemperatureSensors(reader)) {
        return false;
    }
    if (!read_SixAxisForceTorqueSensors(reader)) {
        return false;
    }
    if (!read_ContactLoadCellArrays(reader)) {
        return false;
    }
    if (!read_EncoderArrays(reader)) {
        return false;
    }
    if (!read_SkinPatches(reader)) {
        return false;
    }
    if (!read_PositionSensors(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool SensorStreamingData::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(10)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool SensorStreamingData::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ThreeAxisGyroscopes(writer)) {
        return false;
    }
    if (!write_ThreeAxisLinearAccelerometers(writer)) {
        return false;
    }
    if (!write_ThreeAxisMagnetometers(writer)) {
        return false;
    }
    if (!write_OrientationSensors(writer)) {
        return false;
    }
    if (!write_TemperatureSensors(writer)) {
        return false;
    }
    if (!write_SixAxisForceTorqueSensors(writer)) {
        return false;
    }
    if (!write_ContactLoadCellArrays(writer)) {
        return false;
    }
    if (!write_EncoderArrays(writer)) {
        return false;
    }
    if (!write_SkinPatches(writer)) {
        return false;
    }
    if (!write_PositionSensors(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool SensorStreamingData::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(10)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string SensorStreamingData::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
SensorStreamingData::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new SensorStreamingData;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
SensorStreamingData::Editor::Editor(SensorStreamingData& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
SensorStreamingData::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool SensorStreamingData::Editor::edit(SensorStreamingData& obj, bool dirty)
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
bool SensorStreamingData::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
SensorStreamingData& SensorStreamingData::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void SensorStreamingData::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void SensorStreamingData::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: ThreeAxisGyroscopes setter
void SensorStreamingData::Editor::set_ThreeAxisGyroscopes(const SensorMeasurements& ThreeAxisGyroscopes)
{
    will_set_ThreeAxisGyroscopes();
    obj->ThreeAxisGyroscopes = ThreeAxisGyroscopes;
    mark_dirty_ThreeAxisGyroscopes();
    communicate();
    did_set_ThreeAxisGyroscopes();
}

// Editor: ThreeAxisGyroscopes getter
const SensorMeasurements& SensorStreamingData::Editor::get_ThreeAxisGyroscopes() const
{
    return obj->ThreeAxisGyroscopes;
}

// Editor: ThreeAxisGyroscopes will_set
bool SensorStreamingData::Editor::will_set_ThreeAxisGyroscopes()
{
    return true;
}

// Editor: ThreeAxisGyroscopes did_set
bool SensorStreamingData::Editor::did_set_ThreeAxisGyroscopes()
{
    return true;
}

// Editor: ThreeAxisLinearAccelerometers setter
void SensorStreamingData::Editor::set_ThreeAxisLinearAccelerometers(const SensorMeasurements& ThreeAxisLinearAccelerometers)
{
    will_set_ThreeAxisLinearAccelerometers();
    obj->ThreeAxisLinearAccelerometers = ThreeAxisLinearAccelerometers;
    mark_dirty_ThreeAxisLinearAccelerometers();
    communicate();
    did_set_ThreeAxisLinearAccelerometers();
}

// Editor: ThreeAxisLinearAccelerometers getter
const SensorMeasurements& SensorStreamingData::Editor::get_ThreeAxisLinearAccelerometers() const
{
    return obj->ThreeAxisLinearAccelerometers;
}

// Editor: ThreeAxisLinearAccelerometers will_set
bool SensorStreamingData::Editor::will_set_ThreeAxisLinearAccelerometers()
{
    return true;
}

// Editor: ThreeAxisLinearAccelerometers did_set
bool SensorStreamingData::Editor::did_set_ThreeAxisLinearAccelerometers()
{
    return true;
}

// Editor: ThreeAxisMagnetometers setter
void SensorStreamingData::Editor::set_ThreeAxisMagnetometers(const SensorMeasurements& ThreeAxisMagnetometers)
{
    will_set_ThreeAxisMagnetometers();
    obj->ThreeAxisMagnetometers = ThreeAxisMagnetometers;
    mark_dirty_ThreeAxisMagnetometers();
    communicate();
    did_set_ThreeAxisMagnetometers();
}

// Editor: ThreeAxisMagnetometers getter
const SensorMeasurements& SensorStreamingData::Editor::get_ThreeAxisMagnetometers() const
{
    return obj->ThreeAxisMagnetometers;
}

// Editor: ThreeAxisMagnetometers will_set
bool SensorStreamingData::Editor::will_set_ThreeAxisMagnetometers()
{
    return true;
}

// Editor: ThreeAxisMagnetometers did_set
bool SensorStreamingData::Editor::did_set_ThreeAxisMagnetometers()
{
    return true;
}

// Editor: OrientationSensors setter
void SensorStreamingData::Editor::set_OrientationSensors(const SensorMeasurements& OrientationSensors)
{
    will_set_OrientationSensors();
    obj->OrientationSensors = OrientationSensors;
    mark_dirty_OrientationSensors();
    communicate();
    did_set_OrientationSensors();
}

// Editor: OrientationSensors getter
const SensorMeasurements& SensorStreamingData::Editor::get_OrientationSensors() const
{
    return obj->OrientationSensors;
}

// Editor: OrientationSensors will_set
bool SensorStreamingData::Editor::will_set_OrientationSensors()
{
    return true;
}

// Editor: OrientationSensors did_set
bool SensorStreamingData::Editor::did_set_OrientationSensors()
{
    return true;
}

// Editor: TemperatureSensors setter
void SensorStreamingData::Editor::set_TemperatureSensors(const SensorMeasurements& TemperatureSensors)
{
    will_set_TemperatureSensors();
    obj->TemperatureSensors = TemperatureSensors;
    mark_dirty_TemperatureSensors();
    communicate();
    did_set_TemperatureSensors();
}

// Editor: TemperatureSensors getter
const SensorMeasurements& SensorStreamingData::Editor::get_TemperatureSensors() const
{
    return obj->TemperatureSensors;
}

// Editor: TemperatureSensors will_set
bool SensorStreamingData::Editor::will_set_TemperatureSensors()
{
    return true;
}

// Editor: TemperatureSensors did_set
bool SensorStreamingData::Editor::did_set_TemperatureSensors()
{
    return true;
}

// Editor: SixAxisForceTorqueSensors setter
void SensorStreamingData::Editor::set_SixAxisForceTorqueSensors(const SensorMeasurements& SixAxisForceTorqueSensors)
{
    will_set_SixAxisForceTorqueSensors();
    obj->SixAxisForceTorqueSensors = SixAxisForceTorqueSensors;
    mark_dirty_SixAxisForceTorqueSensors();
    communicate();
    did_set_SixAxisForceTorqueSensors();
}

// Editor: SixAxisForceTorqueSensors getter
const SensorMeasurements& SensorStreamingData::Editor::get_SixAxisForceTorqueSensors() const
{
    return obj->SixAxisForceTorqueSensors;
}

// Editor: SixAxisForceTorqueSensors will_set
bool SensorStreamingData::Editor::will_set_SixAxisForceTorqueSensors()
{
    return true;
}

// Editor: SixAxisForceTorqueSensors did_set
bool SensorStreamingData::Editor::did_set_SixAxisForceTorqueSensors()
{
    return true;
}

// Editor: ContactLoadCellArrays setter
void SensorStreamingData::Editor::set_ContactLoadCellArrays(const SensorMeasurements& ContactLoadCellArrays)
{
    will_set_ContactLoadCellArrays();
    obj->ContactLoadCellArrays = ContactLoadCellArrays;
    mark_dirty_ContactLoadCellArrays();
    communicate();
    did_set_ContactLoadCellArrays();
}

// Editor: ContactLoadCellArrays getter
const SensorMeasurements& SensorStreamingData::Editor::get_ContactLoadCellArrays() const
{
    return obj->ContactLoadCellArrays;
}

// Editor: ContactLoadCellArrays will_set
bool SensorStreamingData::Editor::will_set_ContactLoadCellArrays()
{
    return true;
}

// Editor: ContactLoadCellArrays did_set
bool SensorStreamingData::Editor::did_set_ContactLoadCellArrays()
{
    return true;
}

// Editor: EncoderArrays setter
void SensorStreamingData::Editor::set_EncoderArrays(const SensorMeasurements& EncoderArrays)
{
    will_set_EncoderArrays();
    obj->EncoderArrays = EncoderArrays;
    mark_dirty_EncoderArrays();
    communicate();
    did_set_EncoderArrays();
}

// Editor: EncoderArrays getter
const SensorMeasurements& SensorStreamingData::Editor::get_EncoderArrays() const
{
    return obj->EncoderArrays;
}

// Editor: EncoderArrays will_set
bool SensorStreamingData::Editor::will_set_EncoderArrays()
{
    return true;
}

// Editor: EncoderArrays did_set
bool SensorStreamingData::Editor::did_set_EncoderArrays()
{
    return true;
}

// Editor: SkinPatches setter
void SensorStreamingData::Editor::set_SkinPatches(const SensorMeasurements& SkinPatches)
{
    will_set_SkinPatches();
    obj->SkinPatches = SkinPatches;
    mark_dirty_SkinPatches();
    communicate();
    did_set_SkinPatches();
}

// Editor: SkinPatches getter
const SensorMeasurements& SensorStreamingData::Editor::get_SkinPatches() const
{
    return obj->SkinPatches;
}

// Editor: SkinPatches will_set
bool SensorStreamingData::Editor::will_set_SkinPatches()
{
    return true;
}

// Editor: SkinPatches did_set
bool SensorStreamingData::Editor::did_set_SkinPatches()
{
    return true;
}

// Editor: PositionSensors setter
void SensorStreamingData::Editor::set_PositionSensors(const SensorMeasurements& PositionSensors)
{
    will_set_PositionSensors();
    obj->PositionSensors = PositionSensors;
    mark_dirty_PositionSensors();
    communicate();
    did_set_PositionSensors();
}

// Editor: PositionSensors getter
const SensorMeasurements& SensorStreamingData::Editor::get_PositionSensors() const
{
    return obj->PositionSensors;
}

// Editor: PositionSensors will_set
bool SensorStreamingData::Editor::will_set_PositionSensors()
{
    return true;
}

// Editor: PositionSensors did_set
bool SensorStreamingData::Editor::did_set_PositionSensors()
{
    return true;
}

// Editor: clean
void SensorStreamingData::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool SensorStreamingData::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "ThreeAxisGyroscopes") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements ThreeAxisGyroscopes")) {
                    return false;
                }
            }
            if (field == "ThreeAxisLinearAccelerometers") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements ThreeAxisLinearAccelerometers")) {
                    return false;
                }
            }
            if (field == "ThreeAxisMagnetometers") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements ThreeAxisMagnetometers")) {
                    return false;
                }
            }
            if (field == "OrientationSensors") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements OrientationSensors")) {
                    return false;
                }
            }
            if (field == "TemperatureSensors") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements TemperatureSensors")) {
                    return false;
                }
            }
            if (field == "SixAxisForceTorqueSensors") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements SixAxisForceTorqueSensors")) {
                    return false;
                }
            }
            if (field == "ContactLoadCellArrays") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements ContactLoadCellArrays")) {
                    return false;
                }
            }
            if (field == "EncoderArrays") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements EncoderArrays")) {
                    return false;
                }
            }
            if (field == "SkinPatches") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements SkinPatches")) {
                    return false;
                }
            }
            if (field == "PositionSensors") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("SensorMeasurements PositionSensors")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(11)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("ThreeAxisGyroscopes");
        writer.writeString("ThreeAxisLinearAccelerometers");
        writer.writeString("ThreeAxisMagnetometers");
        writer.writeString("OrientationSensors");
        writer.writeString("TemperatureSensors");
        writer.writeString("SixAxisForceTorqueSensors");
        writer.writeString("ContactLoadCellArrays");
        writer.writeString("EncoderArrays");
        writer.writeString("SkinPatches");
        writer.writeString("PositionSensors");
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
        if (key == "ThreeAxisGyroscopes") {
            will_set_ThreeAxisGyroscopes();
            if (!obj->nested_read_ThreeAxisGyroscopes(reader)) {
                return false;
            }
            did_set_ThreeAxisGyroscopes();
        } else if (key == "ThreeAxisLinearAccelerometers") {
            will_set_ThreeAxisLinearAccelerometers();
            if (!obj->nested_read_ThreeAxisLinearAccelerometers(reader)) {
                return false;
            }
            did_set_ThreeAxisLinearAccelerometers();
        } else if (key == "ThreeAxisMagnetometers") {
            will_set_ThreeAxisMagnetometers();
            if (!obj->nested_read_ThreeAxisMagnetometers(reader)) {
                return false;
            }
            did_set_ThreeAxisMagnetometers();
        } else if (key == "OrientationSensors") {
            will_set_OrientationSensors();
            if (!obj->nested_read_OrientationSensors(reader)) {
                return false;
            }
            did_set_OrientationSensors();
        } else if (key == "TemperatureSensors") {
            will_set_TemperatureSensors();
            if (!obj->nested_read_TemperatureSensors(reader)) {
                return false;
            }
            did_set_TemperatureSensors();
        } else if (key == "SixAxisForceTorqueSensors") {
            will_set_SixAxisForceTorqueSensors();
            if (!obj->nested_read_SixAxisForceTorqueSensors(reader)) {
                return false;
            }
            did_set_SixAxisForceTorqueSensors();
        } else if (key == "ContactLoadCellArrays") {
            will_set_ContactLoadCellArrays();
            if (!obj->nested_read_ContactLoadCellArrays(reader)) {
                return false;
            }
            did_set_ContactLoadCellArrays();
        } else if (key == "EncoderArrays") {
            will_set_EncoderArrays();
            if (!obj->nested_read_EncoderArrays(reader)) {
                return false;
            }
            did_set_EncoderArrays();
        } else if (key == "SkinPatches") {
            will_set_SkinPatches();
            if (!obj->nested_read_SkinPatches(reader)) {
                return false;
            }
            did_set_SkinPatches();
        } else if (key == "PositionSensors") {
            will_set_PositionSensors();
            if (!obj->nested_read_PositionSensors(reader)) {
                return false;
            }
            did_set_PositionSensors();
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
bool SensorStreamingData::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_ThreeAxisGyroscopes) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("ThreeAxisGyroscopes")) {
            return false;
        }
        if (!obj->nested_write_ThreeAxisGyroscopes(writer)) {
            return false;
        }
    }
    if (is_dirty_ThreeAxisLinearAccelerometers) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("ThreeAxisLinearAccelerometers")) {
            return false;
        }
        if (!obj->nested_write_ThreeAxisLinearAccelerometers(writer)) {
            return false;
        }
    }
    if (is_dirty_ThreeAxisMagnetometers) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("ThreeAxisMagnetometers")) {
            return false;
        }
        if (!obj->nested_write_ThreeAxisMagnetometers(writer)) {
            return false;
        }
    }
    if (is_dirty_OrientationSensors) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("OrientationSensors")) {
            return false;
        }
        if (!obj->nested_write_OrientationSensors(writer)) {
            return false;
        }
    }
    if (is_dirty_TemperatureSensors) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("TemperatureSensors")) {
            return false;
        }
        if (!obj->nested_write_TemperatureSensors(writer)) {
            return false;
        }
    }
    if (is_dirty_SixAxisForceTorqueSensors) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("SixAxisForceTorqueSensors")) {
            return false;
        }
        if (!obj->nested_write_SixAxisForceTorqueSensors(writer)) {
            return false;
        }
    }
    if (is_dirty_ContactLoadCellArrays) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("ContactLoadCellArrays")) {
            return false;
        }
        if (!obj->nested_write_ContactLoadCellArrays(writer)) {
            return false;
        }
    }
    if (is_dirty_EncoderArrays) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("EncoderArrays")) {
            return false;
        }
        if (!obj->nested_write_EncoderArrays(writer)) {
            return false;
        }
    }
    if (is_dirty_SkinPatches) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("SkinPatches")) {
            return false;
        }
        if (!obj->nested_write_SkinPatches(writer)) {
            return false;
        }
    }
    if (is_dirty_PositionSensors) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("PositionSensors")) {
            return false;
        }
        if (!obj->nested_write_PositionSensors(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void SensorStreamingData::Editor::communicate()
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
void SensorStreamingData::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: ThreeAxisGyroscopes mark_dirty
void SensorStreamingData::Editor::mark_dirty_ThreeAxisGyroscopes()
{
    if (is_dirty_ThreeAxisGyroscopes) {
        return;
    }
    dirty_count++;
    is_dirty_ThreeAxisGyroscopes = true;
    mark_dirty();
}

// Editor: ThreeAxisLinearAccelerometers mark_dirty
void SensorStreamingData::Editor::mark_dirty_ThreeAxisLinearAccelerometers()
{
    if (is_dirty_ThreeAxisLinearAccelerometers) {
        return;
    }
    dirty_count++;
    is_dirty_ThreeAxisLinearAccelerometers = true;
    mark_dirty();
}

// Editor: ThreeAxisMagnetometers mark_dirty
void SensorStreamingData::Editor::mark_dirty_ThreeAxisMagnetometers()
{
    if (is_dirty_ThreeAxisMagnetometers) {
        return;
    }
    dirty_count++;
    is_dirty_ThreeAxisMagnetometers = true;
    mark_dirty();
}

// Editor: OrientationSensors mark_dirty
void SensorStreamingData::Editor::mark_dirty_OrientationSensors()
{
    if (is_dirty_OrientationSensors) {
        return;
    }
    dirty_count++;
    is_dirty_OrientationSensors = true;
    mark_dirty();
}

// Editor: TemperatureSensors mark_dirty
void SensorStreamingData::Editor::mark_dirty_TemperatureSensors()
{
    if (is_dirty_TemperatureSensors) {
        return;
    }
    dirty_count++;
    is_dirty_TemperatureSensors = true;
    mark_dirty();
}

// Editor: SixAxisForceTorqueSensors mark_dirty
void SensorStreamingData::Editor::mark_dirty_SixAxisForceTorqueSensors()
{
    if (is_dirty_SixAxisForceTorqueSensors) {
        return;
    }
    dirty_count++;
    is_dirty_SixAxisForceTorqueSensors = true;
    mark_dirty();
}

// Editor: ContactLoadCellArrays mark_dirty
void SensorStreamingData::Editor::mark_dirty_ContactLoadCellArrays()
{
    if (is_dirty_ContactLoadCellArrays) {
        return;
    }
    dirty_count++;
    is_dirty_ContactLoadCellArrays = true;
    mark_dirty();
}

// Editor: EncoderArrays mark_dirty
void SensorStreamingData::Editor::mark_dirty_EncoderArrays()
{
    if (is_dirty_EncoderArrays) {
        return;
    }
    dirty_count++;
    is_dirty_EncoderArrays = true;
    mark_dirty();
}

// Editor: SkinPatches mark_dirty
void SensorStreamingData::Editor::mark_dirty_SkinPatches()
{
    if (is_dirty_SkinPatches) {
        return;
    }
    dirty_count++;
    is_dirty_SkinPatches = true;
    mark_dirty();
}

// Editor: PositionSensors mark_dirty
void SensorStreamingData::Editor::mark_dirty_PositionSensors()
{
    if (is_dirty_PositionSensors) {
        return;
    }
    dirty_count++;
    is_dirty_PositionSensors = true;
    mark_dirty();
}

// Editor: dirty_flags
void SensorStreamingData::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_ThreeAxisGyroscopes = flag;
    is_dirty_ThreeAxisLinearAccelerometers = flag;
    is_dirty_ThreeAxisMagnetometers = flag;
    is_dirty_OrientationSensors = flag;
    is_dirty_TemperatureSensors = flag;
    is_dirty_SixAxisForceTorqueSensors = flag;
    is_dirty_ContactLoadCellArrays = flag;
    is_dirty_EncoderArrays = flag;
    is_dirty_SkinPatches = flag;
    is_dirty_PositionSensors = flag;
    dirty_count = flag ? 10 : 0;
}

// read ThreeAxisGyroscopes field
bool SensorStreamingData::read_ThreeAxisGyroscopes(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(ThreeAxisGyroscopes)) {
        reader.fail();
        return false;
    }
    return true;
}

// write ThreeAxisGyroscopes field
bool SensorStreamingData::write_ThreeAxisGyroscopes(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(ThreeAxisGyroscopes)) {
        return false;
    }
    return true;
}

// read (nested) ThreeAxisGyroscopes field
bool SensorStreamingData::nested_read_ThreeAxisGyroscopes(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(ThreeAxisGyroscopes)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) ThreeAxisGyroscopes field
bool SensorStreamingData::nested_write_ThreeAxisGyroscopes(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(ThreeAxisGyroscopes)) {
        return false;
    }
    return true;
}

// read ThreeAxisLinearAccelerometers field
bool SensorStreamingData::read_ThreeAxisLinearAccelerometers(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(ThreeAxisLinearAccelerometers)) {
        reader.fail();
        return false;
    }
    return true;
}

// write ThreeAxisLinearAccelerometers field
bool SensorStreamingData::write_ThreeAxisLinearAccelerometers(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(ThreeAxisLinearAccelerometers)) {
        return false;
    }
    return true;
}

// read (nested) ThreeAxisLinearAccelerometers field
bool SensorStreamingData::nested_read_ThreeAxisLinearAccelerometers(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(ThreeAxisLinearAccelerometers)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) ThreeAxisLinearAccelerometers field
bool SensorStreamingData::nested_write_ThreeAxisLinearAccelerometers(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(ThreeAxisLinearAccelerometers)) {
        return false;
    }
    return true;
}

// read ThreeAxisMagnetometers field
bool SensorStreamingData::read_ThreeAxisMagnetometers(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(ThreeAxisMagnetometers)) {
        reader.fail();
        return false;
    }
    return true;
}

// write ThreeAxisMagnetometers field
bool SensorStreamingData::write_ThreeAxisMagnetometers(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(ThreeAxisMagnetometers)) {
        return false;
    }
    return true;
}

// read (nested) ThreeAxisMagnetometers field
bool SensorStreamingData::nested_read_ThreeAxisMagnetometers(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(ThreeAxisMagnetometers)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) ThreeAxisMagnetometers field
bool SensorStreamingData::nested_write_ThreeAxisMagnetometers(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(ThreeAxisMagnetometers)) {
        return false;
    }
    return true;
}

// read OrientationSensors field
bool SensorStreamingData::read_OrientationSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(OrientationSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write OrientationSensors field
bool SensorStreamingData::write_OrientationSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(OrientationSensors)) {
        return false;
    }
    return true;
}

// read (nested) OrientationSensors field
bool SensorStreamingData::nested_read_OrientationSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(OrientationSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) OrientationSensors field
bool SensorStreamingData::nested_write_OrientationSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(OrientationSensors)) {
        return false;
    }
    return true;
}

// read TemperatureSensors field
bool SensorStreamingData::read_TemperatureSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(TemperatureSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write TemperatureSensors field
bool SensorStreamingData::write_TemperatureSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(TemperatureSensors)) {
        return false;
    }
    return true;
}

// read (nested) TemperatureSensors field
bool SensorStreamingData::nested_read_TemperatureSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(TemperatureSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) TemperatureSensors field
bool SensorStreamingData::nested_write_TemperatureSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(TemperatureSensors)) {
        return false;
    }
    return true;
}

// read SixAxisForceTorqueSensors field
bool SensorStreamingData::read_SixAxisForceTorqueSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(SixAxisForceTorqueSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write SixAxisForceTorqueSensors field
bool SensorStreamingData::write_SixAxisForceTorqueSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(SixAxisForceTorqueSensors)) {
        return false;
    }
    return true;
}

// read (nested) SixAxisForceTorqueSensors field
bool SensorStreamingData::nested_read_SixAxisForceTorqueSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(SixAxisForceTorqueSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) SixAxisForceTorqueSensors field
bool SensorStreamingData::nested_write_SixAxisForceTorqueSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(SixAxisForceTorqueSensors)) {
        return false;
    }
    return true;
}

// read ContactLoadCellArrays field
bool SensorStreamingData::read_ContactLoadCellArrays(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(ContactLoadCellArrays)) {
        reader.fail();
        return false;
    }
    return true;
}

// write ContactLoadCellArrays field
bool SensorStreamingData::write_ContactLoadCellArrays(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(ContactLoadCellArrays)) {
        return false;
    }
    return true;
}

// read (nested) ContactLoadCellArrays field
bool SensorStreamingData::nested_read_ContactLoadCellArrays(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(ContactLoadCellArrays)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) ContactLoadCellArrays field
bool SensorStreamingData::nested_write_ContactLoadCellArrays(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(ContactLoadCellArrays)) {
        return false;
    }
    return true;
}

// read EncoderArrays field
bool SensorStreamingData::read_EncoderArrays(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(EncoderArrays)) {
        reader.fail();
        return false;
    }
    return true;
}

// write EncoderArrays field
bool SensorStreamingData::write_EncoderArrays(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(EncoderArrays)) {
        return false;
    }
    return true;
}

// read (nested) EncoderArrays field
bool SensorStreamingData::nested_read_EncoderArrays(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(EncoderArrays)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) EncoderArrays field
bool SensorStreamingData::nested_write_EncoderArrays(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(EncoderArrays)) {
        return false;
    }
    return true;
}

// read SkinPatches field
bool SensorStreamingData::read_SkinPatches(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(SkinPatches)) {
        reader.fail();
        return false;
    }
    return true;
}

// write SkinPatches field
bool SensorStreamingData::write_SkinPatches(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(SkinPatches)) {
        return false;
    }
    return true;
}

// read (nested) SkinPatches field
bool SensorStreamingData::nested_read_SkinPatches(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(SkinPatches)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) SkinPatches field
bool SensorStreamingData::nested_write_SkinPatches(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(SkinPatches)) {
        return false;
    }
    return true;
}

// read PositionSensors field
bool SensorStreamingData::read_PositionSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(PositionSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write PositionSensors field
bool SensorStreamingData::write_PositionSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(PositionSensors)) {
        return false;
    }
    return true;
}

// read (nested) PositionSensors field
bool SensorStreamingData::nested_read_PositionSensors(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(PositionSensors)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) PositionSensors field
bool SensorStreamingData::nested_write_PositionSensors(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(PositionSensors)) {
        return false;
    }
    return true;
}
