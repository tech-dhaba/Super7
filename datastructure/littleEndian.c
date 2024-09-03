#include <stdio.h>

int main() {
    unsigned int num = 0x12345678; // A multi-byte hexadecimal value
    unsigned char *bytePtr = (unsigned char*)&num; // Pointer to the first byte of 'num'

    printf("Memory representation of 0x12345678:\n");
    for (int i = 0; i < sizeof(num); i++) {
        printf("Byte %d: 0x%02x\n", i, bytePtr[i]);
    }

    // Check the first byte to determine endianness
    if (bytePtr[0] == 0x78) {
        printf("System is Little Endian\n");
    } else if (bytePtr[0] == 0x12) {
        printf("System is Big Endian\n");
    } else {
        printf("Unknown Endian\n");
    }

    return 0;
}

