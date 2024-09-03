//Develop a C program to demonstrate bitwise operations by checking if a numberis even or odd using bitwise AND.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no.:");
	scanf("%d",&n);
	if(n&1)//using add to determine no. is odd as at LSB they have 1
	{
		printf("No. is odd");
	}
	else
	{
		printf("No. is even");
	}
	return 0;
}
