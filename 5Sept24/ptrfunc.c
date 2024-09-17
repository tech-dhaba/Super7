//Pointer to Function: Create a function that takes a pointer to another function as an argument and calls that function.
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	if(y==0)
	{
		printf("Invalid!\n");
	}
	else
	{
		return x/y;
	}
}
int op(int x,int y,int(*op)(int,int))
{
	return op(x,y);
}
int main()
{
	int x,y;
	printf("Enter 2 nos.:\n");
	scanf("%d%d",&x,&y);
	printf("ADD:%d\n",op(x,y,add));
	printf("DIFFERENCE:%d\n",op(x,y,sub));
	printf("PRODUCT:%d\n",op(x,y,mul));
	printf("DIVISION:%d\n",op(x,y,div));
	return 0;
}
