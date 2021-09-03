#ifndef SHAPES_ARGUMENT_OPTION_H
#define SHAPES_ARGUMENT_OPTION_H

#include <string>

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
}

#endif