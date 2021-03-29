#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void set_arg_boolean(char **args_list, int arg_count, char *arg_option, bool *flag) {
    uint8_t index = 0;
    *flag = false;

    for (index = 0; index < arg_count; index++) {
        *flag = strcmp(args_list[index], arg_option) == 0;
        if (*flag)
            break;
    }
}

char* set_arg_string(char **args_list, int arg_count, char *arg_option) {
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
    return arg_value;
}
