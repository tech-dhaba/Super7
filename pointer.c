#if 0
// 1
#include<stdio.h>
int main()
{
int x=10;
int *ptr;
ptr = &x;
printf("Value of x : %d\n",x);
printf("Address of x : %x\n",ptr);
printf("Value of x : %x\n",*ptr);
printf("Value of x : %x\n",&x);
printf("Address of pointer : %x\n",&ptr);
return 0;
}


#elif 0
//2
//swapping by reference
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Before swapping a = %d , b = %d \n",a,b);
	swap(&a,&b);
	printf("After swapping a = %d , b = %d ",a,b);
	return 0;
}


#elif 0
// 3
#include<stdio.h>
#define Max 10
int main()
{
	int array[Max]={1,2,3,4,5,6,7,8,9,10};
	printf("Elements are : \n");
	for(int i=0 ; i<Max ; i++)
	{
		printf("%d\n",*(array+i));
	}
	return 0;
}


#elif 0
//4
//simple program of function pointer
#include<stdio.h>
float oneThird(float x)
{
	return x/3;
}
float onrFifth(float x)
{
	return x/5;
}
int main()
{
	float (*fp)(float);
	fp = oneThird;
	printf("%f",(*fp)(18));
	return 0;
}




#elif 0
//5
//calculator using function pointer
typedef (*fp)(int,int);
int add(int x,int y)
{
	return x+y;
}
int subtract(int x, int y)
{
	return x-y;
}
int multiply(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int cal(int x,int y, fp callback)
{
	return callback(x,y);
}
int main()
{
	int a,b;
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b: \n");
	scanf("%d",&b);
	printf("Addition : %d\n",cal(a,b,add));
	printf("Subtraction : %d\n",cal(a,b,subtract));
	printf("Multiplication : %d\n",cal(a,b,multiply));
	printf("Division : %d\n",cal(a,b,div));
	return 0;
}



#elif 1
//6
#include<stdio.h>
typedef(*fp)(int);
int sin(int num)
{
	return num*num;
}
int inverse(int num)
{
	return 100/num;
}
int cal(int num,fp callback)
{
	return callback(num);
}
int main()
{
	int n,m;
	int num;
	int x;
	printf("Enter the initial value: \n");
	scanf("%d",&n);
	printf("Enter the final value: \n");
        scanf("%d",&m);
	printf("Enter the value of k: \n");
	scanf("%d",num);
	printf("Enter the operation-------1 for sin or 2 for inverse--------:\n");
	scanf("%d",&x);
	if(x==1)
	{
		printf("Value are: \n");
		for(int i=n ; i<m ; i++)
		{
			printf("%d\n",cal(num,sin));
		}
	}
	else if(x==2)
	{
		printf("Value are: \n");
		for(int i=n ; i<m ; i++)
		{
			printf("%d\n",cal(num,inverse));
		}
	}
	return 0;
}



#else
#endif
