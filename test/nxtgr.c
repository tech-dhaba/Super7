//Next Greater Element: Find the next greater element for every element in an array.
#include<stdio.h>
void greater(int *arr,int n)
{
	int i,j,num=0;
	int len=sizeof(arr)/sizeof(int);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(arr[i]<arr[j])
			{
				arr[i]=arr[j];
			}
		}
		printf("Next greater no. to a[%d] is %d\n",i,arr[i]);
	}
	
}
int main()
{
	int i,n,arr[10];
	printf("enter size of elements:\n");
	scanf("%d",&n);
	printf("enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	greater(arr,n);
	return 0;
}
