/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/ILLMMsgs.h>

#include <yarp/os/idl/WireTypes.h>

#include <algorithm>

namespace yarp::dev {

// setPrompt helper class declaration
class ILLMMsgs_setPrompt_helper :
        public yarp::os::Portable
{
public:
    ILLMMsgs_setPrompt_helper() = default;
    explicit ILLMMsgs_setPrompt_helper(const std::string& prompt);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const std::string& prompt);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::string prompt{};
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
    void call(ILLMMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"setPrompt"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool ILLMMsgs::setPrompt(const std::string& prompt)"};
    static constexpr const char* s_help{""};
};

// readPrompt helper class declaration
class ILLMMsgs_readPrompt_helper :
        public yarp::os::Portable
{
public:
    ILLMMsgs_readPrompt_helper() = default;
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

        return_readPrompt return_helper{};
    };

    using funcptr_t = return_readPrompt (*)();
    void call(ILLMMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"readPrompt"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{2};
    static constexpr const char* s_prototype{"return_readPrompt ILLMMsgs::readPrompt()"};
    static constexpr const char* s_help{""};
};

// ask helper class declaration
class ILLMMsgs_ask_helper :
        public yarp::os::Portable
{
public:
    ILLMMsgs_ask_helper() = default;
    explicit ILLMMsgs_ask_helper(const std::string& question);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const std::string& question);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::string question{};
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

        return_ask return_helper{};
    };

    using funcptr_t = return_ask (*)(const std::string&);
    void call(ILLMMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"ask"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{2};
    static constexpr const char* s_prototype{"return_ask ILLMMsgs::ask(const std::string& question)"};
    static constexpr const char* s_help{""};
};

// getConversation helper class declaration
class ILLMMsgs_getConversation_helper :
        public yarp::os::Portable
{
public:
    ILLMMsgs_getConversation_helper() = default;
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

        return_getConversation return_helper{};
    };

    using funcptr_t = return_getConversation (*)();
    void call(ILLMMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"getConversation"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{2};
    static constexpr const char* s_prototype{"return_getConversation ILLMMsgs::getConversation()"};
    static constexpr const char* s_help{""};
};

// deleteConversation helper class declaration
class ILLMMsgs_deleteConversation_helper :
        public yarp::os::Portable
{
public:
    ILLMMsgs_deleteConversation_helper() = default;
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
    void call(ILLMMsgs* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"deleteConversation"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool ILLMMsgs::deleteConversation()"};
    static constexpr const char* s_help{""};
};

// setPrompt helper class implementation
ILLMMsgs_setPrompt_helper::ILLMMsgs_setPrompt_helper(const std::string& prompt) :
        cmd{prompt}
{
}

bool ILLMMsgs_setPrompt_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool ILLMMsgs_setPrompt_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

ILLMMsgs_setPrompt_helper::Command::Command(const std::string& prompt) :
        prompt{prompt}
{
}

bool ILLMMsgs_setPrompt_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool ILLMMsgs_setPrompt_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool ILLMMsgs_setPrompt_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_setPrompt_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_setPrompt_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(prompt)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_setPrompt_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_setPrompt_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool ILLMMsgs_setPrompt_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(prompt)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool ILLMMsgs_setPrompt_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool ILLMMsgs_setPrompt_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool ILLMMsgs_setPrompt_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool ILLMMsgs_setPrompt_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void ILLMMsgs_setPrompt_helper::call(ILLMMsgs* ptr)
{
    reply.return_helper = ptr->setPrompt(cmd.prompt);
}

// readPrompt helper class implementation
bool ILLMMsgs_readPrompt_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool ILLMMsgs_readPrompt_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool ILLMMsgs_readPrompt_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool ILLMMsgs_readPrompt_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool ILLMMsgs_readPrompt_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_readPrompt_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_readPrompt_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool ILLMMsgs_readPrompt_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_readPrompt_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool ILLMMsgs_readPrompt_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool ILLMMsgs_readPrompt_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool ILLMMsgs_readPrompt_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool ILLMMsgs_readPrompt_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool ILLMMsgs_readPrompt_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void ILLMMsgs_readPrompt_helper::call(ILLMMsgs* ptr)
{
    reply.return_helper = ptr->readPrompt();
}

// ask helper class implementation
ILLMMsgs_ask_helper::ILLMMsgs_ask_helper(const std::string& question) :
        cmd{question}
{
}

bool ILLMMsgs_ask_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool ILLMMsgs_ask_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

ILLMMsgs_ask_helper::Command::Command(const std::string& question) :
        question{question}
{
}

bool ILLMMsgs_ask_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool ILLMMsgs_ask_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool ILLMMsgs_ask_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_ask_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_ask_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(question)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_ask_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_ask_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool ILLMMsgs_ask_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(question)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool ILLMMsgs_ask_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool ILLMMsgs_ask_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool ILLMMsgs_ask_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool ILLMMsgs_ask_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void ILLMMsgs_ask_helper::call(ILLMMsgs* ptr)
{
    reply.return_helper = ptr->ask(cmd.question);
}

// getConversation helper class implementation
bool ILLMMsgs_getConversation_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool ILLMMsgs_getConversation_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool ILLMMsgs_getConversation_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool ILLMMsgs_getConversation_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool ILLMMsgs_getConversation_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_getConversation_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_getConversation_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool ILLMMsgs_getConversation_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_getConversation_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool ILLMMsgs_getConversation_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool ILLMMsgs_getConversation_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool ILLMMsgs_getConversation_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool ILLMMsgs_getConversation_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool ILLMMsgs_getConversation_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void ILLMMsgs_getConversation_helper::call(ILLMMsgs* ptr)
{
    reply.return_helper = ptr->getConversation();
}

// deleteConversation helper class implementation
bool ILLMMsgs_deleteConversation_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool ILLMMsgs_deleteConversation_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool ILLMMsgs_deleteConversation_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool ILLMMsgs_deleteConversation_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool ILLMMsgs_deleteConversation_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_deleteConversation_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_deleteConversation_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool ILLMMsgs_deleteConversation_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool ILLMMsgs_deleteConversation_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool ILLMMsgs_deleteConversation_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool ILLMMsgs_deleteConversation_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool ILLMMsgs_deleteConversation_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool ILLMMsgs_deleteConversation_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool ILLMMsgs_deleteConversation_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void ILLMMsgs_deleteConversation_helper::call(ILLMMsgs* ptr)
{
    reply.return_helper = ptr->deleteConversation();
}

// Constructor
ILLMMsgs::ILLMMsgs()
{
    yarp().setOwner(*this);
}

bool ILLMMsgs::setPrompt(const std::string& prompt)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", ILLMMsgs_setPrompt_helper::s_prototype);
    }
    ILLMMsgs_setPrompt_helper helper{prompt};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

return_readPrompt ILLMMsgs::readPrompt()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", ILLMMsgs_readPrompt_helper::s_prototype);
    }
    ILLMMsgs_readPrompt_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_readPrompt{};
}

return_ask ILLMMsgs::ask(const std::string& question)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", ILLMMsgs_ask_helper::s_prototype);
    }
    ILLMMsgs_ask_helper helper{question};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_ask{};
}

return_getConversation ILLMMsgs::getConversation()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", ILLMMsgs_getConversation_helper::s_prototype);
    }
    ILLMMsgs_getConversation_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_getConversation{};
}

bool ILLMMsgs::deleteConversation()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", ILLMMsgs_deleteConversation_helper::s_prototype);
    }
    ILLMMsgs_deleteConversation_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

// help method
std::vector<std::string> ILLMMsgs::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back(ILLMMsgs_setPrompt_helper::s_tag);
        helpString.emplace_back(ILLMMsgs_readPrompt_helper::s_tag);
        helpString.emplace_back(ILLMMsgs_ask_helper::s_tag);
        helpString.emplace_back(ILLMMsgs_getConversation_helper::s_tag);
        helpString.emplace_back(ILLMMsgs_deleteConversation_helper::s_tag);
        helpString.emplace_back("help");
    } else {
        if (functionName == ILLMMsgs_setPrompt_helper::s_tag) {
            helpString.emplace_back(ILLMMsgs_setPrompt_helper::s_prototype);
        }
        if (functionName == ILLMMsgs_readPrompt_helper::s_tag) {
            helpString.emplace_back(ILLMMsgs_readPrompt_helper::s_prototype);
        }
        if (functionName == ILLMMsgs_ask_helper::s_tag) {
            helpString.emplace_back(ILLMMsgs_ask_helper::s_prototype);
        }
        if (functionName == ILLMMsgs_getConversation_helper::s_tag) {
            helpString.emplace_back(ILLMMsgs_getConversation_helper::s_prototype);
        }
        if (functionName == ILLMMsgs_deleteConversation_helper::s_tag) {
            helpString.emplace_back(ILLMMsgs_deleteConversation_helper::s_prototype);
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
bool ILLMMsgs::read(yarp::os::ConnectionReader& connection)
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
        if (tag == ILLMMsgs_setPrompt_helper::s_tag) {
            ILLMMsgs_setPrompt_helper helper;
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
        if (tag == ILLMMsgs_readPrompt_helper::s_tag) {
            ILLMMsgs_readPrompt_helper helper;
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
        if (tag == ILLMMsgs_ask_helper::s_tag) {
            ILLMMsgs_ask_helper helper;
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
        if (tag == ILLMMsgs_getConversation_helper::s_tag) {
            ILLMMsgs_getConversation_helper helper;
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
        if (tag == ILLMMsgs_deleteConversation_helper::s_tag) {
            ILLMMsgs_deleteConversation_helper helper;
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

} // namespace yarp::dev
