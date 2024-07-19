#include <stdio.h>
unsigned int applyMask(unsigned int num, unsigned int mask) {
    return num & mask;
}

int main() {
    unsigned int num = 0b11010110; 
    unsigned int mask = 0b11110000;
    unsigned int maskedResult = applyMask(num, mask);
    printf("Original number: %u\n", num);
    printf("Mask: %u\n", mask);
    printf("Masked result: %u\n", maskedResult);
    return 0;
}

