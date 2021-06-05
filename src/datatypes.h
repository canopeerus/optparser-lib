#ifndef DATATYPES_H
#define DATATYPES_H

#include <string>
#include <vector>
#include <unordered_set>

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
        std::unordered_set<ArgumentOption> argOptions;

        public:
        ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr);
        ArgumentCommand(std::string argCmdStr, std::string argCmdDescStr, ArgumentOption argOption);
        std::string getArgCmdStr(void);
        std::string getArgCmdDescStr(void);
        std::unordered_set<ArgumentOption> getArgOptions(void);
        void setArgCmdStr(std::string argCmdStr);
        void setArgCmdDescStr(std::string argCmdDescStr);
        void insertArgOption(ArgumentOption argOption);
    };

    class ArgumentConfig {
        std::unordered_set<ArgumentCommand> argCommands;
        std::string progName;
        public:
        ArgumentConfig(ArgumentCommand argCommand);
        ArgumentConfig(std::string progName);
        std::unordered_set<ArgumentCommand> getArgCommands(void);
        void insertArgCommand(ArgumentCommand argCommand);
    };              
}
#endif
