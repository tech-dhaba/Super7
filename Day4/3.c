//Write a function that sets the least significant bit (LSB) of a number to 1 using the bitwise OR operator (|).
#include<stdio.h>
int LSB(int n)
{
	n=n|1;
	return n;
}
int main()
{
	int n,r;
	printf("Enter value:\n");
	scanf("%d",&n);
	r=LSB(n);
	printf("The new no. with 0 LSB is: %d\n",r);
	return 0;
}
