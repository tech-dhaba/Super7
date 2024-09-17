//Dynamic Memory Allocation:

//Write a function that dynamically allocates an array of integers and returns a pointer to the first element. Implement error handling for memory allocation failures.
#include<stdio.h>
#include<stdlib.h>
int* array(int size)
{
	int* arr=(int*)malloc(size*sizeof(int));
	if(arr==NULL)
	{
		printf("Array is empty\n");
	}
	return arr;
}
int main()
{
	int n,i;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int* arr=array(n);
	if(arr!=NULL)
	{
		printf("Enter elements:\n");
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
		free(arr);
	}
	return 0;
}
