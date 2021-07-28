#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include <iostream>

int main (int argc, char **argv) {

   optparser::ArgumentConfig argConfig = optparser::newArgumentConfig("tester");
   optparser::addNewArgCommand(argConfig, "help", "helper text");
   std::cout << argConfig.getProgName() << '\n';
   for (auto& it : argConfig.getArgCommands()) {
      std::cout << it.first << std::endl;
   }
   return 0;
}