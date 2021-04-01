#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include<stdio.h>

int main (int argc, char **argv) {
    bool flag = matches_arg_boolean(argv, argc, "flag");
    if (flag) {
        printf("Truyeee");
    } else {
        printf("faloseee");
    }
    const char *arg = set_arg_string(argv, argc, "string-flag");
    if (arg != NULL) {
        printf("%s\n", arg);
    }
    return 0;
}
