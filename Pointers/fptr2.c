//  Write a C program that demonstrates the use of an array of function pointers. Each function in the array should perform a different arithmetic operation (addition, subtraction, multiplication, division) on two integers.
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)                                                                                                                 {
        return x-y;
}
int mul(int x,int y)                                                                                                                 {
        return x*y;
}
int div(int x,int y)
{
	if(y!=0)
	{
		return x/y;
	}
	else
	{
		printf("Division is not possible");
	}
}
int main()
{
	int n,m,i;
	printf("Enter 2 numbers:");
	scanf("%d %d",&n,&m);
	int (*op[4])(int ,int )={add,sub,mul,div};
	char (*op_names[])={"Addition","Subtraction","Multiplication","Division"};
	for(i=0;i<4;i++)
	{
		printf("%s of %d and %d is %d\n",op_names[i],n,m,op[i](n,m));
	}
	return 0;
}
