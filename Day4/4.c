//Write a function that clears the most significant bit (MSB) of a number using a bitwise AND with a specific mask.
#include<stdio.h>
int clear(int num,int n)
{
	int mask;
	mask=(1<<(n-1))-1;
	return num & mask;
}
int main()
{
	int n,sz,r;
	printf("Enter no. whose MSB is to be cleared:\n");
	scanf("%d",&n);
	sz=(sizeof(n)*8);
	printf("No. of bits are:%d\n",sz);
	r=clear(n,sz);
	printf("the resultant no. is:%d\n",r);
	return 0;
}
