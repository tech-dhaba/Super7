#include<stdio.h>
#include <stdint.h>
#include <stdbool.h>
unsigned int reverse_bits(unsigned int num) {
      unsigned int result = 0;
      int bits = sizeof(num) * 8;
      for (int i = 0; i < bits; i++) {
          result = (result << 1) | (num & 1);
          num >>= 1;
      }
      return result;
  }
 int count_set_bits(unsigned int num) {
     int count = 0;
     while (num) {
         count += num & 1;
         num >>= 1;
     }
     return count;
 }
void setBit(uint32_t *n, int pos) {
    *n |= (1U << pos);
}
void clearBit(uint32_t *n, int pos) {
    *n &= ~(1U << pos);
}

void toggleBit(uint32_t *n, int pos) {
    *n ^= (1U << pos);
}

bool checkParity(uint32_t n) {
    int count = countBits(n);
    return (count % 2) == 0; // true if even parity
}
