
#include <stdio.h>

int count_set_bits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num = 0b1011;
    unsigned int result = count_set_bits(num);
    printf("Total set bits: %u\n", result);
    return 0;
}


