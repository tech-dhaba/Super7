#include<stdio.h>
void adconst(int *c,int a,int len)
{
//	int len=(sizeof(c)/sizeof(int));
	printf("array after addinf constant");
	for(int i =0;i<len;i++)
	{
		int b= c[i]+a;
		printf("%d,",b);
	}
printf("\n");
}
void min(int *c,int len)
{
//	int len=(sizeof(c)/sizeof(int));
	int b=c[0];
	for(int i =0;i<len;i++)
	{
		if(b>c[i])
		b=c[i];	
	}
printf("the samllest no = %d\n",b);
}
void max(int *c,int len)
{
	
//	int len=(sizeof(c)/sizeof(int));
	int b=c[0];
	for(int i =0;i<len;i++)
	{
		if(b<c[i])
		b=c[i];	
	}
printf("the max no is %d\n",b);
}
void reverse1(int *c,int len)
{	
	
//	int len=(sizeof(c)/sizeof(int));
	for(int i=0;i<len/2;i++)
	{
		int a=c[i];
		c[i]=c[len-1-i];
		c[len-1-i]=a;
	}
	for(int j=0;j<len;j++)
	{
		printf("%d ,",c[j]);
	}
printf("\n");
}
void addition(int *c,int len )
{
	
//	int len=(sizeof(c)/sizeof(int));
	int a=0;
	for(int i=0;i<len;i++)
	{
		a=a+c[i];
	}
printf("The sum of array = %d\n",a);
}
int main(void)
{
	int c[10];
	printf("Enter the array element\n");
	for(int j=0;j<10;j++)
	{
		scanf("%d",&c[j]);
	}
	
	max(c,10);
	min(c,10);
	reverse1(c,10);
	adconst(c,4,10);
	addition(c,10);
}
