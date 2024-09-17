//Write a function to find the address of the nth element in an array without using pointer arithmetic.
#include<stdio.h>
#include<stdlib.h>
int address(int *arr,int pos)
{
	return &arr[pos];
}
int main()
{
	int arr[20],i,n,p;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("enter position:\n");
	scanf("%d",&p);
	printf("Enter elemnets:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements are:\n[");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("]\n");
	int r=address(&arr,p);
	printf("Address of %dth elemnets is:%d\n",p,r);
	++p;
	int r1=address(&arr,p);
	printf("Address of %dth elemnets is:%d\n",p,r1);
	return 0;
}
