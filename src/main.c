#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include<stdio.h>

int main (int argc, char **argv) {
   argument_config_t* arg_config = new_arg_config();
   printf ("argument config initialized\n");
   printf ("Size of args: %d\n", arg_config->argument_count);
   add_string_argument_config (arg_config, "TEST", "A simple test argument");
   return 0;
}
