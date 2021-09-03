#ifndef SHAPES_ARGUMENT_COMMAND_H
#define SHAPES_ARGUMENT_COMMAND_H

#include <string>
#include <vector>
#include <unordered_map>

#include "ArgumentOption.h"

#define ARG_OPT_PAIR std::pair<std::string, optparser::ArgumentOption>

namespace optparser {
    class ArgumentCommand {
        std::string argCmdStr;
        std::string argCmdDescStr;
        std::unordered_map<std::string, ArgumentOption> argumentOptions;

        public:
        ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr, ArgumentOption argOption);
        ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr);
        std::string getArgCmdStr(void);
        std::string getArgCmdDescStr(void);
        std::unordered_map<std::string, ArgumentOption> getArgOptions(void);
        void setArgCmdStr(std::string argCmdStr);
        void setArgCmdDescStr(std::string argCmdDescStr);
        void insertArgOption(ArgumentOption argOption);
    };
}

#endif