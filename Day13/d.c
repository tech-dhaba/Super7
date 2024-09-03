//Problem: Determine if a given integer is a power of two using bitwise operations.
//Challenge: Implement a solution that handles edge cases like 0 and negative numbers.

#include <stdio.h>
int isPowerOfTwo(unsigned int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
int main() {
    unsigned int numbers[] = {0, 1, 2, 3, 4, 8, 16, 18, 1024, 2047};
    int numTests = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < numTests; ++i) {
        unsigned int number = numbers[i];
        if (isPowerOfTwo(number)) {
            printf("%u is a power of two.\n", number);
        } else {
            printf("%u is NOT a power of two.\n", number);
        }
    }
}

