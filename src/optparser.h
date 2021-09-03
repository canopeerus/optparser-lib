#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>
#include <stdlib.h>

#include "shapes/ArgumentConfig.h"

namespace optparser { 

    void addNewArgCommand(ArgumentConfig& argConfig, std::string cmdStr, std::string cmdDescStr);

    ArgumentConfig newArgumentConfig(std::string progName);

    void addNewOptionToCommand(ArgumentConfig& argConfig, std::string cmdStr, std::string optStr, std::string optDescStr, ArgumentType argType);
}

#endif
