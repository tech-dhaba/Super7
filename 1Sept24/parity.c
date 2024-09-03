//Problem: Determine if a given integer has an even or odd number of ones using bitwise operations.
//Challenge: Implement a solution that is both efficient and concise.
#include<stdio.h>
void parity(int num)
{
	int i,ct=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num&1)
		{
			ct++;//incrementing the count if 1 is occurred while traversing
		}
		num>>=1;
	}
	if(ct & 1)//checking for odd
	{
		printf("Number has odd parity i.e %d\n",ct);
	}
	else
	{
		printf("Number has even parity i.e %d\n",ct);
	}
}
int main()
{
	int n;
	printf("Enter numer whose parity is to be checked:\n");
	scanf("%d",&n);
	parity(n);
	return 0;
}
