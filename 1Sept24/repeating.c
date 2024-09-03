//6. Bitwise Finding the Only Non-Repeating Element
//Problem: Given an array where every element appears twice except for one, find the single element using bitwise operations.
//Challenge: Implement a solution that is efficient for large arrays and handles edge cases.
#include<stdio.h>
int Non_Repeating(int *arr,int n)
{
	int i,r=0;
	for(i=0;i<n+1;i++)
	{
		r^=arr[i];
	}
	return r;
}
int main()
{
	int arr[20],i,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	int r=Non_Repeating(&arr,n);
	printf("Non-Repeating no. is:%d\n",r);
	return 0;
}
