#include "ArgumentCommand.h"

optparser::ArgumentCommand::ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr, optparser::ArgumentOption argOption) {
    this->argCmdStr = argCmdStr;
    this->argCmdDescStr = argCmdDescStr;
    this->argumentOptions.insert(ARG_OPT_PAIR(argOption.getArgOptStr(), argOption));
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