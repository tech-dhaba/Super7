//Write a function to reverse the bits of a 32-bit unsigned integer. For example, reversing 0b00000010100101000001111010011100 should result in 0b00111001011110000010100101000000.
#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int reverse = 0;
    int sz = sizeof(n) * 8;

    for (int i = 0; i < sz; i++) {
        if (n & (1 << i)) {
            reverse |= 1 << (sz - 1 - i);
        }
    }
    return reverse;
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    unsigned int reversed = reverseBits(n);
    printf("Reversed bits: %u\n", reversed);

    return 0;
}

