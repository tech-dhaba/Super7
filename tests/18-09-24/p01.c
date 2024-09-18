/*Calculate the Hamming distance between two unsigned integers (the number of positions at which the corresponding bits differ).*/

#include<stdio.h>
#include<stdint.h>

uint8_t count_set_bits(uint32_t n){
  uint8_t count=0;
  while(n){
    n&=n-1;
    count++;
  }
  return count;
}

int main(void){
  uint32_t x=0b10101010101010101;
  uint32_t y=0b01101000101001011;
  printf("%u\n",count_set_bits(x&y));
}

