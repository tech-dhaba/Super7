//Write a function that counts the number of set bits (1s) in a given integer.
#include<stdio.h>
int count(int n)
{
	int len=sizeof(n)*8;
	int i,ct=0;
	for(i=0;i<len;i++)
	{
		if(n&1)
		{
			ct++;
		}
		n=n>>1;
	}
	return ct;
}
int main()
{
	int n;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("No. of ones are:%d",count(n));
	return 0;
}
