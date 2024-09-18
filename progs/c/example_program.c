// example_program.c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("example_program executed with arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("arg[%d]: %s\n", i, argv[i]);
    }
    return 0;
}

