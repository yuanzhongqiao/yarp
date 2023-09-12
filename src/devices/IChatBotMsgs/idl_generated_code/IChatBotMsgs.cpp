/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <IChatBotMsgs.h>

#include <yarp/os/idl/WireTypes.h>

#include <algorithm>

// interactRPC helper class declaration
class IChatBotMsgs_interactRPC_helper :
        public yarp::os::Portable
{
public:
    IChatBotMsgs_interactRPC_helper() = default;
    explicit IChatBotMsgs_interactRPC_helper(const std::string& messageIn);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const std::string& messageIn);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::string messageIn{};
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        return_interact return_helper{};
    };

    using funcptr_t = return_interact (*)(const std::string&);
    void call(IChatBotMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"interactRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{2};
    static constexpr const char* s_prototype{"return_interact IChatBotMsgs::interactRPC(const std::string& messageIn)"};
    static constexpr const char* s_help{""};
};

// setLanguageRPC helper class declaration
class IChatBotMsgs_setLanguageRPC_helper :
        public yarp::os::Portable
{
public:
    IChatBotMsgs_setLanguageRPC_helper() = default;
    explicit IChatBotMsgs_setLanguageRPC_helper(const std::string& language);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const std::string& language);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::string language{};
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)(const std::string&);
    void call(IChatBotMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"setLanguageRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool IChatBotMsgs::setLanguageRPC(const std::string& language)"};
    static constexpr const char* s_help{""};
};

// getLanguageRPC helper class declaration
class IChatBotMsgs_getLanguageRPC_helper :
        public yarp::os::Portable
{
public:
    IChatBotMsgs_getLanguageRPC_helper() = default;
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        return_getLanguage return_helper{};
    };

    using funcptr_t = return_getLanguage (*)();
    void call(IChatBotMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"getLanguageRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{2};
    static constexpr const char* s_prototype{"return_getLanguage IChatBotMsgs::getLanguageRPC()"};
    static constexpr const char* s_help{""};
};

// resetBotRPC helper class declaration
class IChatBotMsgs_resetBotRPC_helper :
        public yarp::os::Portable
{
public:
    IChatBotMsgs_resetBotRPC_helper() = default;
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)();
    void call(IChatBotMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"resetBotRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool IChatBotMsgs::resetBotRPC()"};
    static constexpr const char* s_help{""};
};

// interactRPC helper class implementation
IChatBotMsgs_interactRPC_helper::IChatBotMsgs_interactRPC_helper(const std::string& messageIn) :
        cmd{messageIn}
{
}

bool IChatBotMsgs_interactRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool IChatBotMsgs_interactRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

IChatBotMsgs_interactRPC_helper::Command::Command(const std::string& messageIn) :
        messageIn{messageIn}
{
}

bool IChatBotMsgs_interactRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool IChatBotMsgs_interactRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool IChatBotMsgs_interactRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(messageIn)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(messageIn)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool IChatBotMsgs_interactRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool IChatBotMsgs_interactRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.write(return_helper)) {
            return false;
        }
    }
    return true;
}

bool IChatBotMsgs_interactRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void IChatBotMsgs_interactRPC_helper::call(IChatBotMsgs* ptr)
{
    reply.return_helper = ptr->interactRPC(cmd.messageIn);
}

// setLanguageRPC helper class implementation
IChatBotMsgs_setLanguageRPC_helper::IChatBotMsgs_setLanguageRPC_helper(const std::string& language) :
        cmd{language}
{
}

bool IChatBotMsgs_setLanguageRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool IChatBotMsgs_setLanguageRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

IChatBotMsgs_setLanguageRPC_helper::Command::Command(const std::string& language) :
        language{language}
{
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(language)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(language)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool IChatBotMsgs_setLanguageRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool IChatBotMsgs_setLanguageRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool IChatBotMsgs_setLanguageRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void IChatBotMsgs_setLanguageRPC_helper::call(IChatBotMsgs* ptr)
{
    reply.return_helper = ptr->setLanguageRPC(cmd.language);
}

// getLanguageRPC helper class implementation
bool IChatBotMsgs_getLanguageRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool IChatBotMsgs_getLanguageRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool IChatBotMsgs_getLanguageRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool IChatBotMsgs_getLanguageRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.write(return_helper)) {
            return false;
        }
    }
    return true;
}

bool IChatBotMsgs_getLanguageRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void IChatBotMsgs_getLanguageRPC_helper::call(IChatBotMsgs* ptr)
{
    reply.return_helper = ptr->getLanguageRPC();
}

// resetBotRPC helper class implementation
bool IChatBotMsgs_resetBotRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool IChatBotMsgs_resetBotRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool IChatBotMsgs_resetBotRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool IChatBotMsgs_resetBotRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool IChatBotMsgs_resetBotRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool IChatBotMsgs_resetBotRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool IChatBotMsgs_resetBotRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool IChatBotMsgs_resetBotRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void IChatBotMsgs_resetBotRPC_helper::call(IChatBotMsgs* ptr)
{
    reply.return_helper = ptr->resetBotRPC();
}

// Constructor
IChatBotMsgs::IChatBotMsgs()
{
    yarp().setOwner(*this);
}

return_interact IChatBotMsgs::interactRPC(const std::string& messageIn)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", IChatBotMsgs_interactRPC_helper::s_prototype);
    }
    IChatBotMsgs_interactRPC_helper helper{messageIn};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_interact{};
}

bool IChatBotMsgs::setLanguageRPC(const std::string& language)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", IChatBotMsgs_setLanguageRPC_helper::s_prototype);
    }
    IChatBotMsgs_setLanguageRPC_helper helper{language};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

return_getLanguage IChatBotMsgs::getLanguageRPC()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", IChatBotMsgs_getLanguageRPC_helper::s_prototype);
    }
    IChatBotMsgs_getLanguageRPC_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_getLanguage{};
}

bool IChatBotMsgs::resetBotRPC()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", IChatBotMsgs_resetBotRPC_helper::s_prototype);
    }
    IChatBotMsgs_resetBotRPC_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

// help method
std::vector<std::string> IChatBotMsgs::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back(IChatBotMsgs_interactRPC_helper::s_tag);
        helpString.emplace_back(IChatBotMsgs_setLanguageRPC_helper::s_tag);
        helpString.emplace_back(IChatBotMsgs_getLanguageRPC_helper::s_tag);
        helpString.emplace_back(IChatBotMsgs_resetBotRPC_helper::s_tag);
        helpString.emplace_back("help");
    } else {
        if (functionName == IChatBotMsgs_interactRPC_helper::s_tag) {
            helpString.emplace_back(IChatBotMsgs_interactRPC_helper::s_prototype);
        }
        if (functionName == IChatBotMsgs_setLanguageRPC_helper::s_tag) {
            helpString.emplace_back(IChatBotMsgs_setLanguageRPC_helper::s_prototype);
        }
        if (functionName == IChatBotMsgs_getLanguageRPC_helper::s_tag) {
            helpString.emplace_back(IChatBotMsgs_getLanguageRPC_helper::s_prototype);
        }
        if (functionName == IChatBotMsgs_resetBotRPC_helper::s_tag) {
            helpString.emplace_back(IChatBotMsgs_resetBotRPC_helper::s_prototype);
        }
        if (functionName == "help") {
            helpString.emplace_back("std::vector<std::string> help(const std::string& functionName = \"--all\")");
            helpString.emplace_back("Return list of available commands, or help message for a specific function");
            helpString.emplace_back("@param functionName name of command for which to get a detailed description. If none or '--all' is provided, print list of available commands");
            helpString.emplace_back("@return list of strings (one string per line)");
        }
    }
    if (helpString.empty()) {
        helpString.emplace_back("Command not found");
    }
    return helpString;
}

// read from ConnectionReader
bool IChatBotMsgs::read(yarp::os::ConnectionReader& connection)
{
    constexpr size_t max_tag_len = 1;
    size_t tag_len = 1;

    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }

    std::string tag = reader.readTag(1);
    bool direct = (tag == "__direct__");
    if (direct) {
        tag = reader.readTag(1);
    }
    while (tag_len <= max_tag_len && !reader.isError()) {
        if (tag == IChatBotMsgs_interactRPC_helper::s_tag) {
            IChatBotMsgs_interactRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == IChatBotMsgs_setLanguageRPC_helper::s_tag) {
            IChatBotMsgs_setLanguageRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == IChatBotMsgs_getLanguageRPC_helper::s_tag) {
            IChatBotMsgs_getLanguageRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == IChatBotMsgs_resetBotRPC_helper::s_tag) {
            IChatBotMsgs_resetBotRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == "help") {
            std::string functionName;
            if (!reader.readString(functionName)) {
                functionName = "--all";
            }
            auto help_strings = help(functionName);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeTag("many", 1, 0)) {
                    return false;
                }
                if (!writer.writeListBegin(0, help_strings.size())) {
                    return false;
                }
                for (const auto& help_string : help_strings) {
                    if (!writer.writeString(help_string)) {
                        return false;
                    }
                }
                if (!writer.writeListEnd()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        std::string next_tag = reader.readTag(1);
        if (next_tag.empty()) {
            break;
        }
        tag.append("_").append(next_tag);
        tag_len = std::count(tag.begin(), tag.end(), '_') + 1;
    }
    return false;
}
