#include <stdio.h>
#include <unistd.h> // for usleep function

void clear_screen() {
    printf("\033[2J"); // ANSI escape code to clear screen
    printf("\033[H");  // ANSI escape code to move cursor to the home position
}

void display_animation() {
    // Array of frames for an ASCII art animation
    char *frames[] = {
        "   ___  _",
        "  / _ \\/_\\  /\\  /\\  ",
        " / /_)/ _ \\ / /_/ /",
        "/ ___/ ___ \\\\____/"
    };

    int num_frames = sizeof(frames) / sizeof(frames[0]);
    int delay_us = 200000; // Delay between frames in microseconds (200ms)

    clear_screen(); // Clear the screen before displaying animation

    for (int i = 0; i < num_frames; ++i) {
        clear_screen(); // Clear screen before printing each frame
        printf("\033[H"); // Move cursor to the home position

        // Print current frame
        for (int j = 0; j <= i; ++j) {
            printf("%s\n", frames[j]);
        }

        usleep(delay_us); // Delay between frames
    }
}

int main() {
    display_animation();

    return 0;
}

