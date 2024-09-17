#include<stdio.h>
int sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
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
	printf("Original array is:\n[");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	sort(arr,n);
	printf("Sorted in ascending order:\n[");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	return 0;
}
