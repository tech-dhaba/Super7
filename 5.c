//Function Table:
//Create a function table containing pointers to different functions. Use this table to invoke the appropriate function based on an input value.
#include<stdio.h>
enum functions
{
	ADD=0,
	SUB,
	MUL,
	DIV
};
struct cal
{
	enum functions func;
	int (*fp)(int ,int);
};
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	if(x>y)
	{
		return x-y;
	}
	else if(x<y)
	{
		return y-x;
	}
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	if(y<=0)
	{
		printf("ERROR");
	}
	else
	{
		return x/y;
	}
}
int main()
{
	struct cal calculator[4];
	calculator[ADD].func=ADD;
	calculator[ADD].fp=add;

	calculator[SUB].func=SUB;
	calculator[SUB].fp=sub;

	calculator[MUL].func=MUL;
	calculator[MUL].fp=mul;

	calculator[DIV].func=DIV;
	calculator[DIV].fp=div;

	int choice,x,y;

	printf("Enter 2 integers:\n");
	scanf("%d%d",&x,&y);

	printf("Select operation:\n0.ADD\n1.SUB\n2.MUL\n3.DIV\n");
	scanf("%d",&choice);

	if(choice>=0 && choice<=3)
	{
		int result=calculator[choice].fp(x,y);
		printf("Result is:%d\n",result);
	}
	else
	{
		printf("INVALID CHOICE\n");
	}
	return 0;
	
}
