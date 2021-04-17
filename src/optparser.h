#ifndef OPTPARSER_H
#define OPTPARSER_H

#include <stdbool.h>
#include <stdlib.h>
#include "datatypes.h"

arg_config_t* new_arg_config (void);

arg_config_t* new_arg_config_with_size (int);

static arg_option_t* new_arg_option (const char*, const char*, arg_type_t);

void arg_config_add_opt (arg_config_t*, arg_option_t);

void populate_help_msg_string (arg_config_t*);

void add_new_bool_arg (arg_config_t*, const char*, const char*);

void add_new_string_arg (arg_config_t*, const char*, const char*);

void arg_config_cleanup (arg_config_t*);

void add_new_bool_arg_fn_ptr (arg_config_t*, const char*, const char*, void (bool*));

int get_arg_config_count (arg_config_t*);

bool matches_arg_boolean (char **args_list, int arg_count, const char *arg_option);

const char* set_arg_string (char **args_list, int arg_count, const char *arg_option);

#endif
