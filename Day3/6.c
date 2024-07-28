#include <stdio.h>
unsigned int reverse_bits(unsigned int num) {
    unsigned int rev = 0;
    int bit_count = 32;
    while (bit_count--) {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }
    return rev;
}
int main() {
    unsigned int a = 0b00000010100101000001111010011100;
    unsigned int rev = reverse_bits(a);
    printf("Original number: %u\n",a);
    printf("Reversed number: %u\n",rev);
    return 0;
}


