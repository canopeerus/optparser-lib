#include "ArgumentConfig.h"

#include "ArgumentCommand.h"


optparser::ArgumentConfig::ArgumentConfig(std::string progName) {
    this->progName = progName;
}

optparser::ArgumentConfig::ArgumentConfig(std::string progName, optparser::ArgumentCommand argCommand) {
    this->progName = progName;
    std::pair<std::string, optparser::ArgumentCommand> argCmdPair{argCommand.getArgCmdStr(), argCommand};
    this->argCommands.insert(ARG_CMD_PAIR(argCommand.getArgCmdStr(), argCommand));
}

std::string optparser::ArgumentConfig::getProgName(void) {
    return this->progName;
}

std::unordered_map<std::string, optparser::ArgumentCommand> optparser::ArgumentConfig::getArgCommands(void) {
    return this->argCommands;
}

void optparser::ArgumentConfig::insertArgCommand(optparser::ArgumentCommand argCommand) {
    this->argCommands.insert(ARG_CMD_PAIR(argCommand.getArgCmdStr(), argCommand));
}

void optparser::ArgumentConfig::insertOptionToCmd(std::string cmdStr, optparser::ArgumentOption argOption) {
   auto matchedArgCmd = this->argCommands.find(cmdStr);
   if (matchedArgCmd != this->argCommands.end()) {
       matchedArgCmd->second.insertArgOption(argOption);
   }
}