#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of 2 using bitwise operations
bool isPowerOfTwo(unsigned int n) {
    // A number n is a power of 2 if n > 0 and (n & (n - 1)) == 0
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    unsigned int num = 16;
    
    if (isPowerOfTwo(num)) {
        printf("%u is a power of 2.\n", num);
    } else {
        printf("%u is not a power of 2.\n", num);
    }
    
    return 0;
}

