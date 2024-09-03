//Write a C program that declares a function pointer pointing to a function that takes two int parameters and returns an int. Use the function pointer to call a function that adds two integers
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int (*fptr)(int,int)=add;
int main()
{
	int x,y;
	printf("Enter 2 integers:\n");
	scanf("%d %d",&x,&y);
	printf("Sum is :%d\n",fptr(x,y));
	return 0;
}
