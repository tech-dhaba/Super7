//Problem: Reverse the bits of a given integer using bitwise operations.
//Challenge: Implement a solution that works efficiently for integers of different sizes and bit patterns.

#include <stdio.h>
unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    int bitCount = sizeof(n) * 8;  
    for (int i = 0; i < bitCount; ++i) {
        rev <<= 1;              
        rev |= (n & 1);         
        n >>= 1;                  
    }
    return rev;
}
int main() {
    unsigned int number = 0x12345678;
    unsigned int rev = reverseBits(number);
    printf("Original: 0x%X\n", number);
    printf("Reversed: 0x%X\n", rev);
}

