//Write a function that checks if a given integer is a power of two using bitwise operations. For example, 16 is a power of two, but 18 is not.
#include<stdio.h>
void power(int x)
{
	int i,size,count=0;
	size=sizeof(x)*8;
	for(i=0;i<size;i++)
	{
		if(x&1)
		{
			count++;
		}
		x=x>>1;
	}
	if(count==1)
	{
		printf("No. is of power of 2\n");
	}
	else
	{
		printf("No. is not of power 2\n");
	}
}
int main()
{
	int n;
	printf("Enter no. to check whether it is of power 2 or not:\n");
	scanf("%d",&n);
	power(n);
}
