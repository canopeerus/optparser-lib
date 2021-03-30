#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>

/* Sets `bool flag` to true if `args_list` contains an argument matching `arg_option` */
void set_arg_boolean(char **args_list, int arg_count, char *arg_option, bool *flag);

/* Returns argument value matching to the arg option supplied in `arg_option` */
char* set_arg_string(char **args_list, int arg_count, char *arg_option);

#endif
