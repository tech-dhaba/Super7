#include<stdio.h>
unsigned int rotate(unsigned int value,int n)
{
	int len=sizeof(value)*8;
	(value >> (len-n) | (value << n));
}
int main()
{
	unsigned int value = 0xAABBCCDD;
	int n =8;
	unsigned int result = rotate(value,n);
	printf("%X",result);
	return 0;
}
