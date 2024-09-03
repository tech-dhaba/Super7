//Recursion:● Q22: Write a recursive function to calculate the nth Fibonacci number. Write a programto test this function.
#include<stdio.h>
int fib(int n)//Function declartion
{
	int i;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n+(n-1));
	}
}
int main()
{
	int n;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("nth fibonacci no. is:%d\n",fib(n));//Function calling
	return 0;
}
