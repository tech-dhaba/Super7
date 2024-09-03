//Write a function that counts the number of set bits (1s) in an integer. For instance, 0b1011 should have 3 set bits.
#include<stdio.h>
int func(int x)
{
	int count=0,i,size;
	size=sizeof(x)*8;
	for(i=0;i<=size;i++)
	{
		if(x&1)
		{
			count++;
		}
		x=x>>1;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter no:\n");
	scanf("%d",&n);
	printf("No. of 1's in the number are:%d\n",func(n));
}
