#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} state;

typedef struct {
    state current_state;
} traffic_light;

void set_state(traffic_light *tf, state s) {
    tf->current_state = s;
}

state get_state(traffic_light *tf) {
    return tf->current_state;
}

int main(void) {
    traffic_light tf;

    while (1) {
        state st;
        printf("Enter traffic_light state\nRED: 0\nYELLOW: 1\nGREEN: 2\n");
        scanf("%u", (unsigned int*)&st); 

        if (st >= RED && st <= GREEN) {
            set_state(&tf, st);
            printf("Current state: %d\n", get_state(&tf));
        } else {
            printf("Invalid input. Please enter a valid state.\n");
        }
    }

    return 0;
}

