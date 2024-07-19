#include <stdio.h>
int mergeIntegers(int a, int b) {
    int result = 0;
    int mask = 1;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if ((a & mask) && (b & mask)) {
            result |= mask;
        }
        mask <<= 1;
    }
    return result;
}

int main() {
    int a = 15;
    int b = 27;
    int merged = mergeIntegers(a, b);
    printf("Merged result of %d and %d is: %d\n", a, b, merged);
    return 0;
}

