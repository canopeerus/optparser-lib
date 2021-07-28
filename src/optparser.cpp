#ifndef OPTPARSER_H
#include "optparser.h"
#endif

optparser::ArgumentConfig optparser::newArgumentConfig(std::string progName) {
    optparser::ArgumentConfig argConfig(progName);
    return argConfig;
}

void optparser::addNewArgCommand(optparser::ArgumentConfig& argConfig, std::string cmdStr, std::string cmdDescStr) {
    optparser::ArgumentCommand argCommand(cmdStr, cmdDescStr);
    argConfig.insertArgCommand(argCommand);
}

void optparser::addNewOptionToCommand(optparser::ArgumentConfig& argConfig, std::string cmdStr, std::string optStr, std::string optDescStr, optparser::ArgumentType argType) {
    optparser::ArgumentOption argOption(optStr, optDescStr, argType);
    argConfig.insertOptionToCmd(cmdStr, argOption);
}
