//Write a function to calculate the bitwise AND of all numbers in the range [m, n] (inclusive). For example, for m = 5 and n = 7, the result should be 4.
#include<stdio.h>
int AND(int m,int n)
{
	for(int i=m;i<n;i++)
	{
		m&=(m+1);
	}
	return m;
}
int main()
{
	int m,n;
	printf("enter range:\n");
	scanf("%d %d",&m,&n);
	printf("Output is:%d",AND(m,n));
}
