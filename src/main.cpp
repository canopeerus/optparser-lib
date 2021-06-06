#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include <iostream>

int main (int argc, char **argv) {

   optparser::ArgumentConfig argConfig = optparser::newArgumentConfig("tester");
   std::cout << argConfig.getProgName() << '\n';
   // arg_config_t* arg_config = new_arg_config();
   // add_new_string_arg(arg_config, "TEST", "A simple test argument");
   // populate_help_msg_string (arg_config);
   // printf ("%s\n", arg_config->help_string);
   // arg_config_cleanup (arg_config);
   // return 0;
}