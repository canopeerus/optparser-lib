#ifndef DATATYPES_H
#define DATATYPES_H

#include <string>
#include <vector>
#include <unordered_map>

namespace optparser {
    typedef enum {
        INFILE_PATH,
        SIMPLE_VAL,
        FLAG
    } ArgumentType;

    class ArgumentOption {
        std::string argOptStr;
        std::string argOptDescStr;
        ArgumentType argumentType;

        public:
        ArgumentOption(std::string argOptStr, std::string argOptDescStr, ArgumentType argType);
        std::string getArgOptStr(void);
        std::string getArgDescStr(void);
        ArgumentType getArgumentType(void);
        void setArgOptStr(std::string argOptStr);
        void setArgDescStr(std::string argDescStr);
        void setArgumentType(ArgumentType argType);
    };

    class ArgumentCommand {
        std::string argCmdStr;
        std::string argCmdDescStr;
        std::unordered_map<std::string, ArgumentOption> argumentOptions;

        public:
        ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr, ArgumentOption argOption);
        std::string getArgCmdStr(void);
        std::string getArgCmdDescStr(void);
        std::unordered_map<std::string, ArgumentOption> getArgOptions(void);
        void setArgCmdStr(std::string argCmdStr);
        void setArgCmdDescStr(std::string argCmdDescStr);
        void insertArgOption(ArgumentOption argOption);
    };

    class ArgumentConfig {
        std::unordered_map<std::string, ArgumentCommand> argCommands;
        std::string progName;

        public:
        ArgumentConfig(std::string progName, ArgumentCommand argCommand);
        ArgumentConfig(std::string progName);
        std::unordered_map<std::string, ArgumentCommand> getArgCommands(void);
        std::string getProgName(void);
        void insertArgCommand(ArgumentCommand argCommand);
    };              
}
#endif
