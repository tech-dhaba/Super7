//Bitwise XOR Swapping
//Problem: Swap two numbers without using a temporary variable using bitwise XOR.
//Challenge: Optimize the solution for large numbers or multiple swaps.
#include<stdio.h>
int swap(int *x,int *y)
{
	*x=*x^(*y);
	*y=*x^(*y);
	*x=*x^(*y);
}
int rev_arr(int *arr,int n)
{
	for(int i=0;i<n/2;i++)
	{
		arr[i]^=arr[n-i-1];
		arr[n-i-1]^=arr[i];
		arr[i]^=arr[n-i-1];
	}
}
int main()
{
	int m,n,i,arr[20],x;
	printf("Enter 2 nos.:\n");
	scanf("%d%d",&m,&n);
	swap(&m,&n);
	printf("swapped nos. are:%d %d\n",m,n);
	printf("Enter size of array:\n");
	scanf("%d",&x);
	printf("Enter elements of array:\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is:\n");
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	rev_arr(&arr,x);
	printf("Reversed array is:\n");
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;

}
