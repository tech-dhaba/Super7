//5. Bitwise Power of Two
//Problem: Determine if a given integer is a power of two using bitwise operations.
//Challenge: Implement a solution that handles edge cases like 0 and negative numbers.
#include<stdio.h>
void power(int num)
{
	int i,ct=0,size;
	size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num & 1)
		{
			ct++;
		}
		num>>=1;
	}
	if(ct==1)
	{
		printf("No. is of power 2\n");
	}
	else
	{
		printf("No. is not of power 2\n");
	}
}
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	power(n);
}
