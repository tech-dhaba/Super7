//What is a pointer in C, and how do you declare and initialize one
#include<stdio.h>
int main()
{
	int a,*ptr;//declaration
	printf("Enter value:\n");
	scanf("%d",&a);
	ptr=&a;//initialization
	printf("Accessing value via pointer:%d\n",*ptr);//accessing
	return 0;
}
