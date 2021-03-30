#ifndef OPTPARSER_H
#include "optparser.h"
#endif

#include<stdio.h>

int main (int argc, char **argv) {
    bool flag;
    set_arg_boolean(argv, argc, "flag", &flag);
    if (flag) {
        printf("Truyeee");
    } else {
        printf("faloseee");
    }
    char *arg = set_arg_string(argv, argc, "string-flag");
    if (arg != NULL) {
        printf("%s\n", arg);
    }
    return 0;
}
