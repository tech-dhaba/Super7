//Write a function that checks if two numbers have opposite signs using bitwise XOR.
#include<stdio.h>
void check(int n,int m)
{
	(n^m)<0)
	{
		printf("no. are of opposite sign");
	}
	else
	{
		printf("no. is of same sign");
	}
}
int main()
{
	int n,m;
	printf("Enter 2 nos.:\n");
	scanf("%d %d",&n,&m);
	check(n,m);
}
