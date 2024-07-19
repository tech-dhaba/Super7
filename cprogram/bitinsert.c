#include <stdio.h>

unsigned int insert_bit(unsigned int num, int bit_value, int pos) {
    unsigned int mask = ~(1 << pos);
    num = num & mask;
    unsigned int bit_to_insert = bit_value << pos;
    num = num | bit_to_insert;
    return num;
}

int main() {
    unsigned int num = 16; 
    int bit_value = 1;     
    int pos = 3;           
    unsigned int result = insert_bit(num, bit_value, pos);
    printf("After inserting bit %d at position %d: %u\n", bit_value, pos, result);
    return 0;
}

