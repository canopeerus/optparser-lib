#ifndef SHAPES_ARGUMENT_CONFIG_H
#define SHAPES_ARGUMENT_CONFIG_H

#include "ArgumentCommand.h"

#include <string>
#include <unordered_map>

#define ARG_CMD_PAIR std::pair<std::string, optparser::ArgumentCommand>

namespace optparser {
    class ArgumentConfig {
        std::unordered_map<std::string, ArgumentCommand> argCommands;
        std::string progName;
        std::string helpMessageLong;
        std::string helpMessageShort;
        
        public:
        ArgumentConfig(std::string progName, ArgumentCommand argCommand);
        ArgumentConfig(std::string progName);
        std::unordered_map<std::string, ArgumentCommand> getArgCommands(void);
        std::string getProgName(void);
        void insertArgCommand(ArgumentCommand argCommand);
        void insertOptionToCmd(std::string argCmdStr, ArgumentOption argOption);
    };              
}

#endif