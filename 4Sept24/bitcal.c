//Optimize the following operations using bitwise techniques:
//Multiplication by 2.
//Division by 2.
//Checking if a number is a power of 2.
//Swapping two numbers without using a temporary variable.
#include<stdio.h>
int mul(int num)
{
	int r;
	r=num<<1;
	return r;
}
int div(int num)
{
	int r;
	r=num>>1;
	return r;
}
void power(int num)
{
	int i,ct=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num&1)
		{
			ct++;
		}
		num>>=1;
	}
	if(ct==1)
	{
		printf("No. is of power 2\n");
	}
	else
	{
		printf("No. is not of power 2\n");
	}
}
void swap(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
	printf("Swapped nos. are:%d %d\n",x,y);
}
int main()
{
	int n,m,d,c,f,x,y;
	printf("Enter no.:\n");
	scanf("%d",&n);
	m=mul(n);
	printf("Output of multiplication with 2 is:%d\n",m);
	printf("Enter no. to be divided with 2:\n");
	scanf("%d",&d);
	c=div(d);
	printf("Result of division is:%d\n",c);
	printf("Enter no. check whether it is of power 2:\n");
	scanf("%d",&f);
	power(f);
	printf("Enter nos to be swapped:\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	return 0;
}
