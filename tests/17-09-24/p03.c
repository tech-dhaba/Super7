/*Bitwise Swapping:
Without using a temporary variable, swap the values of two integer variables using only bitwise operators.
2. Counting Set Bits:
Write a function to count the number of set bits in an integer.
3. Reversing Bits:
Reverse the order of bits in an integer.*/

#include<stdio.h>

void swap(int* a,int* b){
  if(*a==*b)return;
  *a^=*b;
  *b^=*a;
  *a^=*b;
}

unsigned char set_bits(int x){
  unsigned char c=0;
  while(x){
    x&=x-1;
    c++;
  }
  return c;
}

void revbits(int n){
  for(int i=0;i<16;i++){
    (n) & (1<<(31-i)) ^= (n) & (1<<i);
    (n) & (1<<i) ^= (n) & (1<<(31-i));
    (n) & (1<<(31-i)) ^= (n) & (1<<i);
  }
}

int main(void){
  int s=0xAABBCCDD;
  revbits(s);
  printf("%X\n",s);
}



