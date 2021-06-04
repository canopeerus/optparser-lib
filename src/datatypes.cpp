#include "datatypes.h"
#include <string>
#include <unordered_set>

std::string optparser::ArgumentOption::getArgDescStr(void) {
    return this->argOptDescStr;
}

std::string optparser::ArgumentOption::getArgOptStr(void) {
    return this->argOptStr;
}

optparser::ArgumentType optparser::ArgumentOption::getArgumentType(void) {
    return this->argumentType;
}

void optparser::ArgumentOption::setArgDescStr(std::string argOptDescStr) {
    this->argOptDescStr = argOptDescStr;
}

void optparser::ArgumentOption::setArgOptStr(std::string argOptStr) {
    this->argOptStr = argOptStr;
}

void optparser::ArgumentOption::setArgumentType(optparser::ArgumentType argType) {
    this->argumentType = argType;
}

std::string optparser::ArgumentCommand::getArgCmdDescStr(void) {
    return this->argCmdDescStr;
}

std::string optparser::ArgumentCommand::getArgCmdStr(void) {
    return this->argCmdStr;
}

std::unordered_set<optparser::ArgumentOption> optparser::ArgumentCommand::getArgOptions(void) {
    return this->argOptions;
}

void optparser::ArgumentCommand::setArgCmdDescStr(std::string argCmdDescStr) {
    this->argCmdDescStr = argCmdDescStr;
}

void optparser::ArgumentCommand::setArgCmdStr(std::string argCmdStr) {
    this->argCmdStr = argCmdStr;
}

void optparser::ArgumentCommand::insertArgOption(optparser::ArgumentOption argOption) {
    this->argOptions.insert(argOption);
}