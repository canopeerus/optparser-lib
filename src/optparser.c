#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int get_argument_config_count (argument_config_t* arg_config) {
    if (arg_config) {
        return arg_config->argument_count;
    }
    return 0;
}

static argument_option_t* new_argument_option (const char* arg_option_str, const char* arg_description_str, arg_type_t arg_type) {
    argument_option_t* arg_option = (argument_option_t*) malloc (sizeof (argument_option_t));
    arg_option->argument_description_str = arg_description_str;
    arg_option->argument_option_str = arg_option_str;
    arg_option->argument_type = arg_type;
    return arg_option;
}


argument_config_t* new_arg_config (void) {
    argument_config_t* arg_config = (argument_config_t*) malloc (sizeof (argument_config_t));
    vector_init (&arg_config->argument_options_vec);
    arg_config->argument_count = vector_get_size (arg_config->argument_options_vec);
    return arg_config;
}

argument_config_t* new_arg_config_with_size (int size) {
    argument_config_t* arg_config = (argument_config_t*) malloc (sizeof (argument_config_t));
    vector_init_with_capacity (&arg_config->argument_options_vec, size);
    arg_config->argument_count = vector_get_size (arg_config->argument_options_vec);
    return arg_config;
}


void add_boolean_argument_config (argument_config_t* arg_config, const char* arg_option_str, const char* arg_description_str) {
   argument_option_t* arg_option = new_argument_option (arg_option_str, arg_description_str, BOOLEAN_FLAG);
   vector_add (&arg_config->argument_options_vec, arg_option);
   arg_config->argument_count = vector_get_size (arg_config->argument_options_vec);
}

void add_string_argument_config (argument_config_t* arg_config, const char* arg_option_str, const char* arg_description_str) {
    argument_option_t* arg_option = new_argument_option (arg_option_str, arg_description_str, STRING_VAL);
    vector_add (&arg_config->argument_options_vec, arg_option);
    arg_config->argument_count = vector_get_size (arg_config->argument_options_vec);
}

void populate_help_msg_string (argument_config_t* argument_config) {
    if (argument_config && argument_config->argument_count > 0) {
        char* help_msg_str = NULL;
        int help_msg_str_size = 0;
        int argument_options_count = vector_get_size (argument_config->argument_options_vec);
        for (int index = 0; index < argument_options_count; index++) {
            argument_option_t* argument_option = vector_get_element (argument_config->argument_options_vec, index);
            help_msg_str_size += strlen (argument_option->argument_option_str) + 2;
            help_msg_str_size += strlen (argument_option->argument_description_str);
        }
        help_msg_str = (char*) malloc (sizeof(char*) * help_msg_str_size);
        argument_config->help_string = help_msg_str;
    }
}


/**
 * @param args_list list of strings containing argument options
 * @param arg_count count of strings in args_list
 * @param arg_option argument option string to match
 * @return bool indicating if arg_option is passed in the list args_list
 */
bool matches_arg_boolean(char **args_list, int arg_count, const char *arg_option) {
    uint8_t index = 0;
    for (index = 0; index < arg_count; index++) {
        if (strcmp(args_list[index], arg_option) == 0) {
            return true;
        }
    }
    return false;
}

/**
 * @param args_list list of strings containing argument options
 * @param arg_count count of strings in args_list
 * @param arg_option argument option string to match
 * @retur the argument value corresponding to the option in arg_option
 */
const char* set_arg_string(char **args_list, int arg_count, const char *arg_option) {
    uint8_t index = 0;
    char *arg_value = NULL;
    for(index = 0; index < arg_count; index++) {
        if (strcmp(args_list[index], arg_option) == 0) {
            if (index == (arg_count -1)) {
                return NULL;
            }
            size_t arg_v_size = strlen(args_list[index+1]);
            arg_value = (char*) malloc (sizeof(char) * (arg_v_size+1));
            strcpy(arg_value, args_list[index+1]);
        }
    }
    return (const char*) arg_value;
}
