/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarprobotinterfaceRpc.h>

#include <yarp/os/idl/WireTypes.h>

class yarprobotinterfaceRpc_get_phase_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_get_phase_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarprobotinterfaceRpc_get_phase_helper::s_return_helper = {};

yarprobotinterfaceRpc_get_phase_helper::yarprobotinterfaceRpc_get_phase_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_get_phase_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("get_phase", 1, 2)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_get_phase_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_get_level_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_get_level_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t yarprobotinterfaceRpc_get_level_helper::s_return_helper = {};

yarprobotinterfaceRpc_get_level_helper::yarprobotinterfaceRpc_get_level_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_get_level_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("get_level", 1, 2)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_get_level_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_get_robot_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_get_robot_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarprobotinterfaceRpc_get_robot_helper::s_return_helper = {};

yarprobotinterfaceRpc_get_robot_helper::yarprobotinterfaceRpc_get_robot_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_get_robot_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("get_robot", 1, 2)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_get_robot_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_is_ready_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_is_ready_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarprobotinterfaceRpc_is_ready_helper::s_return_helper = {};

yarprobotinterfaceRpc_is_ready_helper::yarprobotinterfaceRpc_is_ready_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_is_ready_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("is_ready", 1, 2)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_is_ready_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_quit_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_quit_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarprobotinterfaceRpc_quit_helper::s_return_helper = {};

yarprobotinterfaceRpc_quit_helper::yarprobotinterfaceRpc_quit_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_quit_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("quit", 1, 1)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_quit_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_bye_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_bye_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarprobotinterfaceRpc_bye_helper::s_return_helper = {};

yarprobotinterfaceRpc_bye_helper::yarprobotinterfaceRpc_bye_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_bye_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("bye", 1, 1)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_bye_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarprobotinterfaceRpc_exit_helper :
        public yarp::os::Portable
{
public:
    explicit yarprobotinterfaceRpc_exit_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarprobotinterfaceRpc_exit_helper::s_return_helper = {};

yarprobotinterfaceRpc_exit_helper::yarprobotinterfaceRpc_exit_helper()
{
    s_return_helper = {};
}

bool yarprobotinterfaceRpc_exit_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("exit", 1, 1)) {
        return false;
    }
    return true;
}

bool yarprobotinterfaceRpc_exit_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

// Constructor
yarprobotinterfaceRpc::yarprobotinterfaceRpc()
{
    yarp().setOwner(*this);
}

std::string yarprobotinterfaceRpc::get_phase()
{
    yarprobotinterfaceRpc_get_phase_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarprobotinterfaceRpc::get_phase()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_get_phase_helper::s_return_helper : std::string{};
}

std::int32_t yarprobotinterfaceRpc::get_level()
{
    yarprobotinterfaceRpc_get_level_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t yarprobotinterfaceRpc::get_level()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_get_level_helper::s_return_helper : std::int32_t{};
}

std::string yarprobotinterfaceRpc::get_robot()
{
    yarprobotinterfaceRpc_get_robot_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarprobotinterfaceRpc::get_robot()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_get_robot_helper::s_return_helper : std::string{};
}

bool yarprobotinterfaceRpc::is_ready()
{
    yarprobotinterfaceRpc_is_ready_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarprobotinterfaceRpc::is_ready()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_is_ready_helper::s_return_helper : bool{};
}

std::string yarprobotinterfaceRpc::quit()
{
    yarprobotinterfaceRpc_quit_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarprobotinterfaceRpc::quit()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_quit_helper::s_return_helper : std::string{};
}

std::string yarprobotinterfaceRpc::bye()
{
    yarprobotinterfaceRpc_bye_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarprobotinterfaceRpc::bye()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_bye_helper::s_return_helper : std::string{};
}

std::string yarprobotinterfaceRpc::exit()
{
    yarprobotinterfaceRpc_exit_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarprobotinterfaceRpc::exit()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarprobotinterfaceRpc_exit_helper::s_return_helper : std::string{};
}

// help method
std::vector<std::string> yarprobotinterfaceRpc::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back("get_phase");
        helpString.emplace_back("get_level");
        helpString.emplace_back("get_robot");
        helpString.emplace_back("is_ready");
        helpString.emplace_back("quit");
        helpString.emplace_back("bye");
        helpString.emplace_back("exit");
        helpString.emplace_back("help");
    } else {
        if (functionName == "get_phase") {
            helpString.emplace_back("std::string get_phase() ");
            helpString.emplace_back("Returns current phase. ");
        }
        if (functionName == "get_level") {
            helpString.emplace_back("std::int32_t get_level() ");
            helpString.emplace_back("Returns current level. ");
        }
        if (functionName == "get_robot") {
            helpString.emplace_back("std::string get_robot() ");
            helpString.emplace_back("Returns robot name. ");
        }
        if (functionName == "is_ready") {
            helpString.emplace_back("bool is_ready() ");
            helpString.emplace_back("Returns true if yarprobotinterface is ready (all startup actions ");
            helpString.emplace_back("performed and no interrupt called). ");
        }
        if (functionName == "quit") {
            helpString.emplace_back("std::string quit() ");
            helpString.emplace_back("Closes yarprobotinterface. ");
        }
        if (functionName == "bye") {
            helpString.emplace_back("std::string bye() ");
            helpString.emplace_back("Closes yarprobotinterface. ");
        }
        if (functionName == "exit") {
            helpString.emplace_back("std::string exit() ");
            helpString.emplace_back("Closes yarprobotinterface. ");
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
bool yarprobotinterfaceRpc::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }

    std::string tag = reader.readTag();
    bool direct = (tag == "__direct__");
    if (direct) {
        tag = reader.readTag();
    }
    while (!reader.isError()) {
        if (tag == "get_phase") {
            yarprobotinterfaceRpc_get_phase_helper::s_return_helper = get_phase();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarprobotinterfaceRpc_get_phase_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "get_level") {
            yarprobotinterfaceRpc_get_level_helper::s_return_helper = get_level();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(yarprobotinterfaceRpc_get_level_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "get_robot") {
            yarprobotinterfaceRpc_get_robot_helper::s_return_helper = get_robot();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarprobotinterfaceRpc_get_robot_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "is_ready") {
            yarprobotinterfaceRpc_is_ready_helper::s_return_helper = is_ready();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarprobotinterfaceRpc_is_ready_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "quit") {
            yarprobotinterfaceRpc_quit_helper::s_return_helper = quit();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarprobotinterfaceRpc_quit_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "bye") {
            yarprobotinterfaceRpc_bye_helper::s_return_helper = bye();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarprobotinterfaceRpc_bye_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "exit") {
            yarprobotinterfaceRpc_exit_helper::s_return_helper = exit();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarprobotinterfaceRpc_exit_helper::s_return_helper)) {
                    return false;
                }
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
                if (!writer.writeListBegin(BOTTLE_TAG_INT32, static_cast<uint32_t>(help_strings.size()))) {
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
        std::string next_tag = reader.readTag();
        if (next_tag == "") {
            break;
        }
        tag.append("_").append(next_tag);
    }
    return false;
}
