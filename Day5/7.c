//Write a function that inserts a specific value into a specific range of bits within a number.
#include<stdio.h>
void insert(int num,int r1,int r2,int value)
{
	int len=sizeof(num)*8;
	if(r1<0 || r2>len)
	{
		printf("lenght is invalid\n");
	}
	int i,mask;
	mask=1<<r1;
	int n=num;
	for(i=r1;i<r2;i++)
	{
		num=num & ~(mask);
		mask=mask<<1;
		printf("Num is %d\n",num);
		printf("Mask is %d\n",mask);
	}
	printf("No. with removed range is %d\n",num);
	value=value<<r1;
	num=num|value;
	printf("update no. is %d\n",num);
}
int main()
{
	int n,r1,r2,val;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("Enter range\n");
	scanf("%d %d",&r1,&r2);
	printf("Enter value to be inserted\n");
	scanf("%d",&val);
	insert(n,r1,r2,val);
	return 0;
}
