/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_path.h>

// Constructor with field values
return_get_path::return_get_path(const bool retval,
                                 const yarp::dev::Nav2D::Map2DPath& path) :
        WirePortable(),
        retval(retval),
        path(path)
{
}

// Read structure on a Wire
bool return_get_path::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!nested_read_path(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_path::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_path::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!nested_write_path(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_path::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_path::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_get_path::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_get_path;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_get_path::Editor::Editor(return_get_path& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_get_path::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_get_path::Editor::edit(return_get_path& obj, bool dirty)
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
bool return_get_path::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_get_path& return_get_path::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_get_path::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_get_path::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: retval setter
void return_get_path::Editor::set_retval(const bool retval)
{
    will_set_retval();
    obj->retval = retval;
    mark_dirty_retval();
    communicate();
    did_set_retval();
}

// Editor: retval getter
bool return_get_path::Editor::get_retval() const
{
    return obj->retval;
}

// Editor: retval will_set
bool return_get_path::Editor::will_set_retval()
{
    return true;
}

// Editor: retval did_set
bool return_get_path::Editor::did_set_retval()
{
    return true;
}

// Editor: path setter
void return_get_path::Editor::set_path(const yarp::dev::Nav2D::Map2DPath& path)
{
    will_set_path();
    obj->path = path;
    mark_dirty_path();
    communicate();
    did_set_path();
}

// Editor: path getter
const yarp::dev::Nav2D::Map2DPath& return_get_path::Editor::get_path() const
{
    return obj->path;
}

// Editor: path will_set
bool return_get_path::Editor::will_set_path()
{
    return true;
}

// Editor: path did_set
bool return_get_path::Editor::did_set_path()
{
    return true;
}

// Editor: clean
void return_get_path::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_get_path::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "retval") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("bool retval")) {
                    return false;
                }
            }
            if (field == "path") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("yarp::dev::Nav2D::Map2DPath path")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(3)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("retval");
        writer.writeString("path");
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
        if (key == "retval") {
            will_set_retval();
            if (!obj->nested_read_retval(reader)) {
                return false;
            }
            did_set_retval();
        } else if (key == "path") {
            will_set_path();
            if (!obj->nested_read_path(reader)) {
                return false;
            }
            did_set_path();
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
bool return_get_path::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_retval) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("retval")) {
            return false;
        }
        if (!obj->nested_write_retval(writer)) {
            return false;
        }
    }
    if (is_dirty_path) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("path")) {
            return false;
        }
        if (!obj->nested_write_path(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void return_get_path::Editor::communicate()
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
void return_get_path::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: retval mark_dirty
void return_get_path::Editor::mark_dirty_retval()
{
    if (is_dirty_retval) {
        return;
    }
    dirty_count++;
    is_dirty_retval = true;
    mark_dirty();
}

// Editor: path mark_dirty
void return_get_path::Editor::mark_dirty_path()
{
    if (is_dirty_path) {
        return;
    }
    dirty_count++;
    is_dirty_path = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_get_path::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_retval = flag;
    is_dirty_path = flag;
    dirty_count = flag ? 2 : 0;
}

// read retval field
bool return_get_path::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write retval field
bool return_get_path::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_path::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write (nested) retval field
bool return_get_path::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read path field
bool return_get_path::read_path(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(path)) {
        reader.fail();
        return false;
    }
    return true;
}

// write path field
bool return_get_path::write_path(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(path)) {
        return false;
    }
    return true;
}

// read (nested) path field
bool return_get_path::nested_read_path(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(path)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) path field
bool return_get_path::nested_write_path(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(path)) {
        return false;
    }
    return true;
}
