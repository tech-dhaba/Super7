#include <stdio.h>

// Define a structure with bit fields
struct BitFieldStruct {
    unsigned char bit1: 1;
    unsigned char bit2: 1;
    unsigned char bit3: 1;
    unsigned char bit4: 1;
    unsigned char bit5: 1;
    unsigned char bit6: 1;
    unsigned char bit7: 1;
    unsigned char bit8: 1;
    unsigned char bit9: 1;
    unsigned char bit10: 1;
    unsigned char bit11: 1;
    unsigned char bit12: 1;
    unsigned char bit13: 1;
    unsigned char bit14: 1;
    unsigned char bit15: 1;
    unsigned char bit16: 1;
};

int main() {
    // Find and print the size of the structure with bit fields
    printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct BitFieldStruct));
    return 0;
}

