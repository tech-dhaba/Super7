
#include <stdio.h>
#include <stdint.h>

void printHighestPrioritySignal(unsigned int signals) {
    for (int i = 0; i < 32; ++i) {
        if (signals & (1 << i)) {
            printf("Highest priority signal set at index: %d\n", i);
            return;
        }
    }
    printf("No signals are set.\n");
}

int main() {
    unsigned int signals = 0b00000000000000000000000100001000;
    printHighestPrioritySignal(signals);
    return 0;
}

