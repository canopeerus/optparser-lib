#include "ArgumentOption.h"

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