//3. Bitwise Reversing
//Problem: Reverse the bits of a given integer using bitwise operations.
//Challenge: Implement a solution that works efficiently for integers of different sizes and bit
#include<stdio.h>
unsigned int reverse(unsigned int num)
{
	int i,rev=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num & (1<<i))
		{
			rev|=1<<(size-1-i);
		}
	}
	return rev;
}
int main()
{
	unsigned int n;
	printf("Enter number:\n");
	scanf("%u",&n);
	unsigned int r=reverse(n);
	printf("Reversed number is:%u\n",r);
	return 0;
}
