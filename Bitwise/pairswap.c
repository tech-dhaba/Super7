//19 Pairwise Swap: Write a function to swap every pair of adjacent bits in a 32-bit unsigned integer.
#include<stdio.h>
#include<stdint.h>
uint32_t pairwiseSwap(uint32_t n)
{
	uint32_t evenMask=0xAAAAAAAA;
	uint32_t oddMask=0x55555555;
	//extract even bits and shift them to left
	uint32_t evenBits= n & evenMask;
	evenBits>>=1;
	//extract odd bits and shift them to right
	uint32_t oddBits= n & oddMask;
        oddBits>>=1;
	return(evenBits|oddBits);
}
int main()
{
	uint32_t num;
	printf("enter no.:\n");
	scanf("%u", &num);

        uint32_t swapped = pairwiseSwap(num);

        printf("swapped number in binary:%u\n ",swapped);
	return 0;
}
