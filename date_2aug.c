//Write a function that takes an array of integers and its size as input. The function should return the sum of all elements in the array.      Ensure that the function handles the case where the array index goes out-of-bounds.
#include<stdio.h>
void array_func(int array[],int n)
{
	for(int i=0 ; i<n ; i++ )
	{
		printf("Enter element %d : ",i);
		scanf("%d",&array[i]);
	}
}
int main()
{
	int m;
	int arr[m];
	printf("Enter the size of array : ");
	scanf("%d",&m);
	array_func(arr,m);
	int sum=0;
	for(int j = 0 ; j < m ; j++)
	{
		sum = sum+arr[j];
	}
	printf("Sum of all element : %d",sum);
	return 0;
}
