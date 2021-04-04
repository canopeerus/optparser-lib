#ifndef DATATYPES_H
#define DATATYPES_H

#include <stdbool.h>
#include <stdlib.h>

#include "vector.h"

typedef enum {
    BOOLEAN_FLAG,
    STRING_VAL,
    NUMERIC_VAL
} arg_type_t;

typedef struct argument_option {
    const char* argument_option_str;
    const char* argument_description_str;
    arg_type_t argument_type;
} argument_option_t;

typedef struct argument_config {
    const char* help_string;
    int argument_count;
    vector_t argument_options_vec;
} argument_config_t;

#endif
