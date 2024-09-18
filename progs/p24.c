#include<stdio.h>
#include<stdint.h>

uint8_t set_bits(uint32_t n,uint8_t count){
  if(!n)return count;
  count++;
  set_bits(n&n-1,count);
}

int main(void){
  uint32_t x=0b110011001100;
  printf("%u\n",set_bits(x,0));
}
