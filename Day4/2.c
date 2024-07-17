//Write a function that checks if a number is odd using the bitwise XOR operator (^).
#include<stdio.h>
int main()
{
	int n;
	printf("Enter value to check wheter the no. is odd or not\n");
	scanf("%d",&n);
	if(n^1<n)
	{
		printf("No. is odd\n");
	}
	else
	{
		printf("No. is not odd\n");
	}
	return 0;
}
