//Implement a C program to find the largest of three numbers using nested if-elsestatements.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter values for a,b and c nos.:\n");//asking user for input
	scanf("%d %d %d",&a,&b,&c);//scanning values for input
	if(a>b && a>c)//comparing the values
	{
		printf("a is the largest no.");
	}
	else if(b>a && b>c)
	{
		printf("b is the largest no.");
	}
	else
	{
		printf("c is the largest no.");
	}
	return 0;
}

