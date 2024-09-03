//Write a C program that defines a function pointer callback for handling events. Implement a function registerCallback(void (*callback)(int)) that registers a callback function to be called with an integer argument. Demonstrate the use of the callback function with different scenarios.
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
int div(int x,int y)                                                                                                                 {
        if(y!=0)
	{
		return x/y;
	}
	else
	{
		printf("Not divisible");
	}
}

