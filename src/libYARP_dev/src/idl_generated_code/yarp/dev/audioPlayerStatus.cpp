/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/audioPlayerStatus.h>

namespace yarp {
namespace dev {

// Default constructor
audioPlayerStatus::audioPlayerStatus() :
        WirePortable(),
        enabled(0),
        current_buffer_size(0),
        max_buffer_size(0)
{
}

// Constructor with field values
audioPlayerStatus::audioPlayerStatus(const bool enabled,
                                     const size_t current_buffer_size,
                                     const size_t max_buffer_size) :
        WirePortable(),
        enabled(enabled),
        current_buffer_size(current_buffer_size),
        max_buffer_size(max_buffer_size)
{
}

// Read structure on a Wire
bool audioPlayerStatus::read(yarp::os::idl::WireReader& reader)
{
    if (!read_enabled(reader)) {
        return false;
    }
    if (!read_current_buffer_size(reader)) {
        return false;
    }
    if (!read_max_buffer_size(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool audioPlayerStatus::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(3)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool audioPlayerStatus::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_enabled(writer)) {
        return false;
    }
    if (!write_current_buffer_size(writer)) {
        return false;
    }
    if (!write_max_buffer_size(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool audioPlayerStatus::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string audioPlayerStatus::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
audioPlayerStatus::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new audioPlayerStatus;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
audioPlayerStatus::Editor::Editor(audioPlayerStatus& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
audioPlayerStatus::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool audioPlayerStatus::Editor::edit(audioPlayerStatus& obj, bool dirty)
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
bool audioPlayerStatus::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
audioPlayerStatus& audioPlayerStatus::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void audioPlayerStatus::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void audioPlayerStatus::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: enabled setter
void audioPlayerStatus::Editor::set_enabled(const bool enabled)
{
    will_set_enabled();
    obj->enabled = enabled;
    mark_dirty_enabled();
    communicate();
    did_set_enabled();
}

// Editor: enabled getter
bool audioPlayerStatus::Editor::get_enabled() const
{
    return obj->enabled;
}

// Editor: enabled will_set
bool audioPlayerStatus::Editor::will_set_enabled()
{
    return true;
}

// Editor: enabled did_set
bool audioPlayerStatus::Editor::did_set_enabled()
{
    return true;
}

// Editor: current_buffer_size setter
void audioPlayerStatus::Editor::set_current_buffer_size(const size_t current_buffer_size)
{
    will_set_current_buffer_size();
    obj->current_buffer_size = current_buffer_size;
    mark_dirty_current_buffer_size();
    communicate();
    did_set_current_buffer_size();
}

// Editor: current_buffer_size getter
size_t audioPlayerStatus::Editor::get_current_buffer_size() const
{
    return obj->current_buffer_size;
}

// Editor: current_buffer_size will_set
bool audioPlayerStatus::Editor::will_set_current_buffer_size()
{
    return true;
}

// Editor: current_buffer_size did_set
bool audioPlayerStatus::Editor::did_set_current_buffer_size()
{
    return true;
}

// Editor: max_buffer_size setter
void audioPlayerStatus::Editor::set_max_buffer_size(const size_t max_buffer_size)
{
    will_set_max_buffer_size();
    obj->max_buffer_size = max_buffer_size;
    mark_dirty_max_buffer_size();
    communicate();
    did_set_max_buffer_size();
}

// Editor: max_buffer_size getter
size_t audioPlayerStatus::Editor::get_max_buffer_size() const
{
    return obj->max_buffer_size;
}

// Editor: max_buffer_size will_set
bool audioPlayerStatus::Editor::will_set_max_buffer_size()
{
    return true;
}

// Editor: max_buffer_size did_set
bool audioPlayerStatus::Editor::did_set_max_buffer_size()
{
    return true;
}

// Editor: clean
void audioPlayerStatus::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool audioPlayerStatus::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "enabled") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("bool enabled")) {
                    return false;
                }
                if (!writer.writeString("true if the playback is currently enabled")) {
                    return false;
                }
            }
            if (field == "current_buffer_size") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("size_t current_buffer_size")) {
                    return false;
                }
                if (!writer.writeString("the size of the audio buffer [samples]")) {
                    return false;
                }
            }
            if (field == "max_buffer_size") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("size_t max_buffer_size")) {
                    return false;
                }
                if (!writer.writeString("the max_size of the audio buffer [samples]")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(4)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("enabled");
        writer.writeString("current_buffer_size");
        writer.writeString("max_buffer_size");
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
        if (key == "enabled") {
            will_set_enabled();
            if (!obj->nested_read_enabled(reader)) {
                return false;
            }
            did_set_enabled();
        } else if (key == "current_buffer_size") {
            will_set_current_buffer_size();
            if (!obj->nested_read_current_buffer_size(reader)) {
                return false;
            }
            did_set_current_buffer_size();
        } else if (key == "max_buffer_size") {
            will_set_max_buffer_size();
            if (!obj->nested_read_max_buffer_size(reader)) {
                return false;
            }
            did_set_max_buffer_size();
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
bool audioPlayerStatus::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_enabled) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("enabled")) {
            return false;
        }
        if (!obj->nested_write_enabled(writer)) {
            return false;
        }
    }
    if (is_dirty_current_buffer_size) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("current_buffer_size")) {
            return false;
        }
        if (!obj->nested_write_current_buffer_size(writer)) {
            return false;
        }
    }
    if (is_dirty_max_buffer_size) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("max_buffer_size")) {
            return false;
        }
        if (!obj->nested_write_max_buffer_size(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void audioPlayerStatus::Editor::communicate()
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
void audioPlayerStatus::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: enabled mark_dirty
void audioPlayerStatus::Editor::mark_dirty_enabled()
{
    if (is_dirty_enabled) {
        return;
    }
    dirty_count++;
    is_dirty_enabled = true;
    mark_dirty();
}

// Editor: current_buffer_size mark_dirty
void audioPlayerStatus::Editor::mark_dirty_current_buffer_size()
{
    if (is_dirty_current_buffer_size) {
        return;
    }
    dirty_count++;
    is_dirty_current_buffer_size = true;
    mark_dirty();
}

// Editor: max_buffer_size mark_dirty
void audioPlayerStatus::Editor::mark_dirty_max_buffer_size()
{
    if (is_dirty_max_buffer_size) {
        return;
    }
    dirty_count++;
    is_dirty_max_buffer_size = true;
    mark_dirty();
}

// Editor: dirty_flags
void audioPlayerStatus::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_enabled = flag;
    is_dirty_current_buffer_size = flag;
    is_dirty_max_buffer_size = flag;
    dirty_count = flag ? 3 : 0;
}

// read enabled field
bool audioPlayerStatus::read_enabled(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(enabled)) {
        reader.fail();
        return false;
    }
    return true;
}

// write enabled field
bool audioPlayerStatus::write_enabled(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(enabled)) {
        return false;
    }
    return true;
}

// read (nested) enabled field
bool audioPlayerStatus::nested_read_enabled(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(enabled)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) enabled field
bool audioPlayerStatus::nested_write_enabled(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(enabled)) {
        return false;
    }
    return true;
}

// read current_buffer_size field
bool audioPlayerStatus::read_current_buffer_size(yarp::os::idl::WireReader& reader)
{
    if (!reader.readSizeT(current_buffer_size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write current_buffer_size field
bool audioPlayerStatus::write_current_buffer_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeSizeT(current_buffer_size)) {
        return false;
    }
    return true;
}

// read (nested) current_buffer_size field
bool audioPlayerStatus::nested_read_current_buffer_size(yarp::os::idl::WireReader& reader)
{
    if (!reader.readSizeT(current_buffer_size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) current_buffer_size field
bool audioPlayerStatus::nested_write_current_buffer_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeSizeT(current_buffer_size)) {
        return false;
    }
    return true;
}

// read max_buffer_size field
bool audioPlayerStatus::read_max_buffer_size(yarp::os::idl::WireReader& reader)
{
    if (!reader.readSizeT(max_buffer_size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write max_buffer_size field
bool audioPlayerStatus::write_max_buffer_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeSizeT(max_buffer_size)) {
        return false;
    }
    return true;
}

// read (nested) max_buffer_size field
bool audioPlayerStatus::nested_read_max_buffer_size(yarp::os::idl::WireReader& reader)
{
    if (!reader.readSizeT(max_buffer_size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) max_buffer_size field
bool audioPlayerStatus::nested_write_max_buffer_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeSizeT(max_buffer_size)) {
        return false;
    }
    return true;
}

} // namespace yarp
} // namespace dev
