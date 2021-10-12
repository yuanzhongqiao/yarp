/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_current_position2.h>

// Default constructor
return_get_current_position2::return_get_current_position2() :
        WirePortable(),
        ret(false),
        loc(),
        cov()
{
}

// Constructor with field values
return_get_current_position2::return_get_current_position2(const bool ret,
                                                           const yarp::dev::Nav2D::Map2DLocation& loc,
                                                           const yarp::sig::Matrix& cov) :
        WirePortable(),
        ret(ret),
        loc(loc),
        cov(cov)
{
}

// Read structure on a Wire
bool return_get_current_position2::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!read_loc(reader)) {
        return false;
    }
    if (!read_cov(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_current_position2::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(3)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_current_position2::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!write_loc(writer)) {
        return false;
    }
    if (!write_cov(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_current_position2::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_current_position2::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_get_current_position2::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_get_current_position2;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_get_current_position2::Editor::Editor(return_get_current_position2& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_get_current_position2::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_get_current_position2::Editor::edit(return_get_current_position2& obj, bool dirty)
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
bool return_get_current_position2::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_get_current_position2& return_get_current_position2::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_get_current_position2::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_get_current_position2::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: ret setter
void return_get_current_position2::Editor::set_ret(const bool ret)
{
    will_set_ret();
    obj->ret = ret;
    mark_dirty_ret();
    communicate();
    did_set_ret();
}

// Editor: ret getter
bool return_get_current_position2::Editor::get_ret() const
{
    return obj->ret;
}

// Editor: ret will_set
bool return_get_current_position2::Editor::will_set_ret()
{
    return true;
}

// Editor: ret did_set
bool return_get_current_position2::Editor::did_set_ret()
{
    return true;
}

// Editor: loc setter
void return_get_current_position2::Editor::set_loc(const yarp::dev::Nav2D::Map2DLocation& loc)
{
    will_set_loc();
    obj->loc = loc;
    mark_dirty_loc();
    communicate();
    did_set_loc();
}

// Editor: loc getter
const yarp::dev::Nav2D::Map2DLocation& return_get_current_position2::Editor::get_loc() const
{
    return obj->loc;
}

// Editor: loc will_set
bool return_get_current_position2::Editor::will_set_loc()
{
    return true;
}

// Editor: loc did_set
bool return_get_current_position2::Editor::did_set_loc()
{
    return true;
}

// Editor: cov setter
void return_get_current_position2::Editor::set_cov(const yarp::sig::Matrix& cov)
{
    will_set_cov();
    obj->cov = cov;
    mark_dirty_cov();
    communicate();
    did_set_cov();
}

// Editor: cov getter
const yarp::sig::Matrix& return_get_current_position2::Editor::get_cov() const
{
    return obj->cov;
}

// Editor: cov will_set
bool return_get_current_position2::Editor::will_set_cov()
{
    return true;
}

// Editor: cov did_set
bool return_get_current_position2::Editor::did_set_cov()
{
    return true;
}

// Editor: clean
void return_get_current_position2::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_get_current_position2::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "ret") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("bool ret")) {
                    return false;
                }
            }
            if (field == "loc") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("yarp::dev::Nav2D::Map2DLocation loc")) {
                    return false;
                }
            }
            if (field == "cov") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("yarp::sig::Matrix cov")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(4)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("ret");
        writer.writeString("loc");
        writer.writeString("cov");
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
        if (key == "ret") {
            will_set_ret();
            if (!obj->nested_read_ret(reader)) {
                return false;
            }
            did_set_ret();
        } else if (key == "loc") {
            will_set_loc();
            if (!obj->nested_read_loc(reader)) {
                return false;
            }
            did_set_loc();
        } else if (key == "cov") {
            will_set_cov();
            if (!obj->nested_read_cov(reader)) {
                return false;
            }
            did_set_cov();
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
bool return_get_current_position2::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_ret) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("ret")) {
            return false;
        }
        if (!obj->nested_write_ret(writer)) {
            return false;
        }
    }
    if (is_dirty_loc) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("loc")) {
            return false;
        }
        if (!obj->nested_write_loc(writer)) {
            return false;
        }
    }
    if (is_dirty_cov) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("cov")) {
            return false;
        }
        if (!obj->nested_write_cov(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void return_get_current_position2::Editor::communicate()
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
void return_get_current_position2::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: ret mark_dirty
void return_get_current_position2::Editor::mark_dirty_ret()
{
    if (is_dirty_ret) {
        return;
    }
    dirty_count++;
    is_dirty_ret = true;
    mark_dirty();
}

// Editor: loc mark_dirty
void return_get_current_position2::Editor::mark_dirty_loc()
{
    if (is_dirty_loc) {
        return;
    }
    dirty_count++;
    is_dirty_loc = true;
    mark_dirty();
}

// Editor: cov mark_dirty
void return_get_current_position2::Editor::mark_dirty_cov()
{
    if (is_dirty_cov) {
        return;
    }
    dirty_count++;
    is_dirty_cov = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_get_current_position2::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_ret = flag;
    is_dirty_loc = flag;
    is_dirty_cov = flag;
    dirty_count = flag ? 3 : 0;
}

// read ret field
bool return_get_current_position2::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = 0;
    }
    return true;
}

// write ret field
bool return_get_current_position2::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_get_current_position2::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = 0;
    }
    return true;
}

// write (nested) ret field
bool return_get_current_position2::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read loc field
bool return_get_current_position2::read_loc(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(loc)) {
        reader.fail();
        return false;
    }
    return true;
}

// write loc field
bool return_get_current_position2::write_loc(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(loc)) {
        return false;
    }
    return true;
}

// read (nested) loc field
bool return_get_current_position2::nested_read_loc(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(loc)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) loc field
bool return_get_current_position2::nested_write_loc(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(loc)) {
        return false;
    }
    return true;
}

// read cov field
bool return_get_current_position2::read_cov(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(cov)) {
        reader.fail();
        return false;
    }
    return true;
}

// write cov field
bool return_get_current_position2::write_cov(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(cov)) {
        return false;
    }
    return true;
}

// read (nested) cov field
bool return_get_current_position2::nested_read_cov(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(cov)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) cov field
bool return_get_current_position2::nested_write_cov(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(cov)) {
        return false;
    }
    return true;
}
