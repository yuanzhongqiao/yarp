/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_all_locations.h>

// Default constructor
return_get_all_locations::return_get_all_locations() :
        WirePortable(),
        retval(false),
        locations()
{
}

// Constructor with field values
return_get_all_locations::return_get_all_locations(const bool retval,
                                                   const std::vector<yarp::dev::Nav2D::Map2DLocation>& locations) :
        WirePortable(),
        retval(retval),
        locations(locations)
{
}

// Read structure on a Wire
bool return_get_all_locations::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_locations(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_all_locations::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_all_locations::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_locations(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_all_locations::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_all_locations::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_get_all_locations::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_get_all_locations;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_get_all_locations::Editor::Editor(return_get_all_locations& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_get_all_locations::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_get_all_locations::Editor::edit(return_get_all_locations& obj, bool dirty)
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
bool return_get_all_locations::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_get_all_locations& return_get_all_locations::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_get_all_locations::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_get_all_locations::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: retval setter
void return_get_all_locations::Editor::set_retval(const bool retval)
{
    will_set_retval();
    obj->retval = retval;
    mark_dirty_retval();
    communicate();
    did_set_retval();
}

// Editor: retval getter
bool return_get_all_locations::Editor::get_retval() const
{
    return obj->retval;
}

// Editor: retval will_set
bool return_get_all_locations::Editor::will_set_retval()
{
    return true;
}

// Editor: retval did_set
bool return_get_all_locations::Editor::did_set_retval()
{
    return true;
}

// Editor: locations setter
void return_get_all_locations::Editor::set_locations(const std::vector<yarp::dev::Nav2D::Map2DLocation>& locations)
{
    will_set_locations();
    obj->locations = locations;
    mark_dirty_locations();
    communicate();
    did_set_locations();
}

// Editor: locations setter (list)
void return_get_all_locations::Editor::set_locations(size_t index, const yarp::dev::Nav2D::Map2DLocation& elem)
{
    will_set_locations();
    obj->locations[index] = elem;
    mark_dirty_locations();
    communicate();
    did_set_locations();
}

// Editor: locations getter
const std::vector<yarp::dev::Nav2D::Map2DLocation>& return_get_all_locations::Editor::get_locations() const
{
    return obj->locations;
}

// Editor: locations will_set
bool return_get_all_locations::Editor::will_set_locations()
{
    return true;
}

// Editor: locations did_set
bool return_get_all_locations::Editor::did_set_locations()
{
    return true;
}

// Editor: clean
void return_get_all_locations::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_get_all_locations::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "locations") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::vector<yarp::dev::Nav2D::Map2DLocation> locations")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(3)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("retval");
        writer.writeString("locations");
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
        } else if (key == "locations") {
            will_set_locations();
            if (!obj->nested_read_locations(reader)) {
                return false;
            }
            did_set_locations();
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
bool return_get_all_locations::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_locations) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("locations")) {
            return false;
        }
        if (!obj->nested_write_locations(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void return_get_all_locations::Editor::communicate()
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
void return_get_all_locations::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: retval mark_dirty
void return_get_all_locations::Editor::mark_dirty_retval()
{
    if (is_dirty_retval) {
        return;
    }
    dirty_count++;
    is_dirty_retval = true;
    mark_dirty();
}

// Editor: locations mark_dirty
void return_get_all_locations::Editor::mark_dirty_locations()
{
    if (is_dirty_locations) {
        return;
    }
    dirty_count++;
    is_dirty_locations = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_get_all_locations::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_retval = flag;
    is_dirty_locations = flag;
    dirty_count = flag ? 2 : 0;
}

// read retval field
bool return_get_all_locations::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = 0;
    }
    return true;
}

// write retval field
bool return_get_all_locations::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_all_locations::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = 0;
    }
    return true;
}

// write (nested) retval field
bool return_get_all_locations::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read locations field
bool return_get_all_locations::read_locations(yarp::os::idl::WireReader& reader)
{
    locations.clear();
    uint32_t _size48;
    yarp::os::idl::WireState _etype51;
    reader.readListBegin(_etype51, _size48);
    locations.resize(_size48);
    for (size_t _i52 = 0; _i52 < _size48; ++_i52) {
        if (!reader.readNested(locations[_i52])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write locations field
bool return_get_all_locations::write_locations(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(locations.size()))) {
        return false;
    }
    for (const auto& _item53 : locations) {
        if (!writer.writeNested(_item53)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) locations field
bool return_get_all_locations::nested_read_locations(yarp::os::idl::WireReader& reader)
{
    locations.clear();
    uint32_t _size54;
    yarp::os::idl::WireState _etype57;
    reader.readListBegin(_etype57, _size54);
    locations.resize(_size54);
    for (size_t _i58 = 0; _i58 < _size54; ++_i58) {
        if (!reader.readNested(locations[_i58])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) locations field
bool return_get_all_locations::nested_write_locations(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(locations.size()))) {
        return false;
    }
    for (const auto& _item59 : locations) {
        if (!writer.writeNested(_item59)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}
