//Write a function that checks if a number is even using the bitwise AND operator (&).
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. to check wheter the no. is even or not:\n");
	scanf("%d",&n);
	if(n&1)
	{
		printf("No. is not even\n");
	}
	else
	{
		printf("No. is even\n");
	}
	return 0;
}
