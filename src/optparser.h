#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>
#include <stdlib.h>
#include "datatypes.h"

void populate_help_msg_string(argument_config* config);

/** 
 * Returns true if supplied argument option is present args list 
 * @param args_list a list of strings.
 * @param arg_count an integer argument indicating number of strings in `args_list`
 * @param arg_option a const character pointer storing the argument option to match
 * @return boolean flag.
 */
bool matches_arg_boolean(char **args_list, int arg_count, const char *arg_option);

/** 
 * Returns a string (char pointer) containing the argument value matching to the argument option
 * @param[in]args_list a list of strings
 * @param[in]arg_count number of argument options in args_list
 * @param[in]arg_option argument option string to match
 * Returns argument value matching to the arg option supplied in `arg_option` */
const char* set_arg_string(char **args_list, int arg_count, const char *arg_option);

#endif
