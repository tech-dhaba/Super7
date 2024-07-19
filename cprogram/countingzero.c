#include <stdio.h>
int countLeadingZeros(unsigned int num) {
    if (num == 0) {
        return sizeof(num) * 8;
    }
    int count = 0;
    while ((num & (1u << (sizeof(num) * 8 - 1))) == 0) {
        num <<= 1;
        count++;
    }
    return count;
}
int countTrailingZeros(unsigned int num) {
    if (num == 0) {
        return sizeof(num) * 8; 
    }
    int count = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        count++;
    }
    return count;
}
int main() {
    unsigned int num = 12345;
    int leadingZeros = countLeadingZeros(num);
    int tralingZeros = countTrailingZeros(num);
    printf("Number of leading zeros in %u is: %d\n", num, leadingZeros);
    printf("Number of trailing zeros in %u is: %d\n", num, tralingZeros);
    return 0;
}

