#include <stdio.h>
#include <unistd.h> // for usleep function

void animate_spinner() {
    const char spinner[] = "|/-\\";
    int i = 0;

    while (1) {
        printf("\033[1;34m%c\r\033[0m", spinner[i]); // Print spinner character in blue color
        fflush(stdout); // Flush stdout to ensure the character is printed immediately

        usleep(100000); // Delay between spinner frames (100ms)

        i = (i + 1) % 4; // Cycle through spinner characters
    }
}

int main() {
    animate_spinner(); // Start the spinner animation

    return 0;
}

