//reate a C program that uses an enum to define arithmetic operations (addition, subtraction, multiplication, division). Use a switch-case statement to perform the selected operation based on user input. Employ the goto statement to handle error conditions like division by zero, jumping to an error handling section.
#include<stdio.h>
enum
{
	addition,
	subtraction,
	multiplication,
	division
};
int main()
{
	int x,y,i;
	printf("Enter 2 values:\n");
	scanf("%d %d",&x,&y);
	for(i=addition;i<=division;i++)
	{
		switch(i)
		{
			case addition:
				goto add;
				break;
			case subtraction:
				goto sub;
				break;
			case multiplication:
				goto mul;
				break;
			case division:
				goto div;		
				break;
			default:
				goto error;
				break;
		}
	}
add:
        printf("Sum is:%d\n",(x+y));
sub:
        printf("Difference is:%d\n",(x-y));
mul:
	if(x>100||y>100)
        {
                goto error;
        }
        printf("Product is:%d\n",(x*y));
div:
	if(x<=0)
	{
		goto error;
	}
	else if(y<=0)
	{
		goto error;
	}
        printf("Division is:%d\n",(x/y));
        goto last;
error:
	printf("invalid case\n");
last:
	printf("FINISH\n");
	return 0;
}
