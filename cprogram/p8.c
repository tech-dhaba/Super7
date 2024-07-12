#include<stdio.h>
typedef int(*op)(int,int);

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int divi(int a,int b)
{
	if(b==0)
	{
		printf("Inalid");
		return 0;
	}
return a/b;
}
int main()
{
	int num1,num2;int result;
	int opera;
	printf("Enter two number");
	scanf("%d",&num1);
	scanf("%d",&num2);
	printf("Enter the operation to be performed \n 1- addition\n 2- Substraction\n 3- Mutiplication\n 4- Division\n");
	scanf("%d",&opera);
	op oper[]={add,sub,multi,divi};
	result=oper[opera-1](num1,num2);
	printf("Result = %d\n",result);
	return 0;
}
