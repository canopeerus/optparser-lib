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

typedef struct {
    const char* help_string;
    size_t argument_count;
} argument_config;

#endif
