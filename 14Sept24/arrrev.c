#include<stdio.h>
int rev(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	return arr[i];
}
int main()
{
	int n,i,arr[20];
	printf("Enter size:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ARRAY IS:\n[");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	rev(arr,n);
	printf("Reverse is:\n[");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	return 0;
}
