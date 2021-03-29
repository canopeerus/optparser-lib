#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>

void set_arg_boolean(char **args_list, int arg_count, char *arg_option, bool *flag);

char* set_arg_string(char **args_list, int arg_count, char *arg_option);

#endif
