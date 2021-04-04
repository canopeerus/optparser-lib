#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>
#include <stdlib.h>
#include "datatypes.h"

argument_config_t* new_arg_config (void);

argument_config_t* new_arg_config_with_size (int);

static argument_option_t* new_argument_option (const char*, const char*, arg_type_t);

void argument_config_add_opt (argument_config_t* config, argument_option_t arg_option);

void populate_help_msg_string (argument_config_t* config);

void add_boolean_argument_config (argument_config_t* config, const char* arg_option_str, const char* arg_description_str);

void add_string_argument_config (argument_config_t* config, const char* arg_option_str, const char* arg_description_str);

int get_argument_config_count (argument_config_t* config);

/** 
 * Returns true if supplied argument option is present args list 
 * @param args_list a list of strings.
 * @param arg_count an integer argument indicating number of strings in `args_list`
 * @param arg_option a const character pointer storing the argument option to match
 * @return boolean flag.
 */
bool matches_arg_boolean (char **args_list, int arg_count, const char *arg_option);

/** 
 * Returns a string (char pointer) containing the argument value matching to the argument option
 * @param[in]args_list a list of strings
 * @param[in]arg_count number of argument options in args_list
 * @param[in]arg_option argument option string to match
 * Returns argument value matching to the arg option supplied in `arg_option` */
const char* set_arg_string (char **args_list, int arg_count, const char *arg_option);

#endif
