#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Path to the executable
    char *path = "./example_program";

    // Arguments for the executable
    char *const argv[] = {"example_program", "arg1", "arg2", NULL};

    // Execute the program
    if (execv(path, argv) == -1) {
        perror("execv");  // If execv returns, an error has occurred
        exit(EXIT_FAILURE);
    }

    // Code here will only run if execv fails
    return 1;
}

