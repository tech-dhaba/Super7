//2. Bitwise Counting Ones
//Problem: Count the number of ones in a given integer using bitwise operations.
//Challenge: Implement a highly efficient solution for large integers or multiple counts.
#include<stdio.h>
int count(int num)
{
	int i,ct=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num&1)
		{
			ct++;
		}
		num>>=1;
	}
	return ct;
}
int main()
{
	int n;
	printf("Enter no.:\n");
	scanf("%d",&n);
	int r=count(n);
	printf("No. of 1's are:%d\n",r);
	return 0;
}
