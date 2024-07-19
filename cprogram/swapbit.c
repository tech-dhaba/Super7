#include <stdio.h>
unsigned int swapOddEvenBits(unsigned int num) {
    unsigned int evenBitsMask = 0xAAAAAAAA;
    unsigned int oddBitsMask = 0x55555555;
    unsigned int evenBits = num & evenBitsMask;
    unsigned int oddBits = num & oddBitsMask;
    evenBits >>= 1;
    oddBits <<= 1;
    return evenBits | oddBits;
}
int main() {
    unsigned int num = 0b10101010; 
    printf("Original number: %u\n", num);
    unsigned int swappedNumber = swapOddEvenBits(num);
    printf("Number after swapping odd and even bits: %u\n", swappedNumber);
    return 0;
}

