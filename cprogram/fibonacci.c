#include<stdio.h>
 int  fibonacci(int n,int a,int b)// fibo function
{
	int f;int c;
	 if(n!=0)
	 {
	 int p= fibonacci(n-1,b,a+b);// recursion 
	 }
	else// if(n==0) this is the exit statement of this recursion 
	{
	 	return a+b ;
	}
}
int main()
{
	int n;
	printf("Enter the nth term to be found\n");
	scanf("%d",&n);
	int nth= fibonacci(n-1,0,1);
	printf("the nth term is = %d",nth-1);
}
