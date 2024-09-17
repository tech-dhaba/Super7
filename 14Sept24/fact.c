#include<stdio.h>
#include<stdlib.h>
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int n;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("Fact is:%d\n",fact(n));
}
