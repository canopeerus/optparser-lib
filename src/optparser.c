#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

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
