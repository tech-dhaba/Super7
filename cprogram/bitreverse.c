#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;
 //   int bitsCount = sizeof(num)  ; 
    
  //  for (int i = 0; i < bitsCount; i++)
	while(num!=0)
   {
        reversed = (reversed << 1) | (num & 1); 
        num >>= 1; 
    }
    
    return reversed;
}

int main() {
    unsigned int num = 23; 
    printf("Original number: %u\n", num);
    
    unsigned int reversed = reverseBits(num);
    printf("Number after bits reversal: %u\n", reversed);
    
    return 0;
}

