//Question: Develop a C program that uses function pointers to implement a simple callback mechanism. Create a function that takes another function as an argument and calls it after performing some operation (e.g., after processing an array of integers).
//Hint: Use function pointers to pass a callback function that gets called within another function.
#include<stdio.h>
typedef int (*op)(int ,int );
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
int div(int x,int y)                                                                                                                 {
	if(y!=0)
	{
		return x/y;
	}
	else
	{
		printf("Division is not possible");
	}
}
int result(int x,int y,op operation)
{
	return operation(x,y);
}
int main()
{
	int x,y;
	printf("Enter 2 nos.:\n");
	scanf("%d%d",&x,&y);
	printf("Sum is:%d\n",result(x,y,add));
	printf("Difference is:%d\n",result(x,y,sub));
	printf("Product is:%d\n",result(x,y,mul));
	printf("Division is:%d\n",result(x,y,div));
	return 0;
}
