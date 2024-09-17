//Function Pointers:

//Implement a callback mechanism using function pointers to perform different operations based on user input.
#include<stdio.h>
void add(int x,int y)
{
	printf("SUM:%d\n",x+y);
}
void sub(int x,int y)
{
	printf("DIFFERENCE:%d\n",x-y);
}
void mul(int x,int y)
{
	printf("PRODUCT:%d\n",x*y);
}
void div(int x,int y)
{
	if(y!=0)
	{
		printf("DIVISION:%d\n",x/y);
	}
	else
	{
		printf("INVALID!");
	}
}
void cal(int x,int y,void *fp(int,int))
{
	printf("Resultant\n");
	fp(x,y);
}
int main()
{
	int n,m,op;
	printf("Enter two integers:\n");
	scanf("%d%d",&n,&m);
	printf("Enter Value for operation\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
	scanf("%d",&op);
	if(op==1)
	{
		add(n,m);
	}
	else if(op==2)
	{
		sub(n,m);
	}
	else if(op==3)
	{
		mul(n,m);
	}
	else if(op==4)
	{
		div(n,m);
	}
	else
	{
		printf("INVALID OPERATION\n");
	}
	return 0;
}
