#include <stdio.h>

int rangeBitwiseXor(int start, int end) {
    int result = 0; 
    for (int i = start; i <= end; ++i) {
        result ^= i;
    }
    return result;
}
int main() {
    int start = 5;
    int end = 7;
    int bitwiseXor = rangeBitwiseXor(start, end);
    printf("Bitwise XOR of numbers from %d to %d is: %d\n", start, end, bitwiseXor);
    return 0;
}

