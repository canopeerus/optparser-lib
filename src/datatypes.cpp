#include "datatypes.h"
#include <string>
#include <unordered_map>
#include <utility>
#include <functional>

#define ARG_CMD_PAIR std::make_pair
#define ARG_OPT_PAIR std::make_pair

/**
 * ArgumentOption
 */
optparser::ArgumentOption::ArgumentOption(std::string argOptStr, std::string argOptDescStr, optparser::ArgumentType argType) {
    this->argOptDescStr = argOptDescStr;
    this->argumentType = argType;
    this->argOptStr = argOptStr;
}

std::string optparser::ArgumentOption::getArgOptStr(void) {
    return this->argOptStr;
}

std::string optparser::ArgumentOption::getArgDescStr(void) {
    return this->argOptDescStr;
}

optparser::ArgumentType optparser::ArgumentOption::getArgumentType(void) {
    return this->argumentType;
}

void optparser::ArgumentOption::setArgOptStr(std::string argOptStr) {
    this->argOptStr = argOptStr;
}

void optparser::ArgumentOption::setArgDescStr(std::string argOptDescStr) {
    this->argOptDescStr = argOptDescStr;
}

void optparser::ArgumentOption::setArgumentType(optparser::ArgumentType argType) {
    this->argumentType = argType;
}

/**
 * ArgumentCommand
 */ 
optparser::ArgumentCommand::ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr, optparser::ArgumentOption argOption) {
    this->argCmdStr = argCmdStr;
    this->argCmdDescStr = argCmdDescStr;
    this->argumentOptions.insert(
        ARG_OPT_PAIR(argOption.getArgOptStr(), argOption));
}

optparser::ArgumentCommand::ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr) {
    this->argCmdStr = argCmdStr;
    this->argCmdDescStr = argCmdDescStr;
}

std::string optparser::ArgumentCommand::getArgCmdDescStr(void) {
    return this->argCmdDescStr;
}

std::string optparser::ArgumentCommand::getArgCmdStr(void) {
    return this->argCmdStr;
}

std::unordered_map<std::string, optparser::ArgumentOption> optparser::ArgumentCommand::getArgOptions(void) {
    return this->argumentOptions;
}

void optparser::ArgumentCommand::setArgCmdDescStr(std::string argCmdDescStr) {
    this->argCmdDescStr = argCmdDescStr;
}

void optparser::ArgumentCommand::setArgCmdStr(std::string argCmdStr) {
    this->argCmdStr = argCmdStr;
}

void optparser::ArgumentCommand::insertArgOption(optparser::ArgumentOption argOption) {
    this->argumentOptions.insert(ARG_OPT_PAIR(argOption.getArgOptStr(), argOption));
}

/**
 * ArgumentConfig
 */

optparser::ArgumentConfig::ArgumentConfig(std::string progName) {
    this->progName = progName;
}

optparser::ArgumentConfig::ArgumentConfig(std::string progName, optparser::ArgumentCommand argCommand) {
    this->progName = progName;
    this->argCommands.insert(ARG_CMD_PAIR(argCommand.getArgCmdStr(), argCommand));
}

std::string optparser::ArgumentConfig::getProgName(void) {
    return this->progName;
}

std::unordered_map<std::string, optparser::ArgumentCommand> optparser::ArgumentConfig::getArgCommands(void) {
    return this->argCommands;
}

void optparser::ArgumentConfig::insertArgCommand(optparser::ArgumentCommand argCommand) {
    this->argCommands.insert(
        ARG_CMD_PAIR(argCommand.getArgCmdStr(), argCommand));
}

void optparser::ArgumentConfig::insertOptionToCmd(std::string cmdStr, optparser::ArgumentOption argOption) {
   auto matchedArgCmd = this->argCommands.find(cmdStr);
   if (matchedArgCmd != this->argCommands.end()) {
       matchedArgCmd->second.insertArgOption(argOption);
   }
}