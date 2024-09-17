//Dynamic Array: Implement a dynamic array data structure that can dynamically resize itself as needed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter size of arr:\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	//for reading elements
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements are:[\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("]\n");
	free(arr);
}
