//Sliding Window Maximum and minimum: Find the maximum and minimum value in each sliding window of size k.
#include<stdio.h>
void max(int *arr,int k,int n,int len)
{
	int i,max=0;
	//int len=sizeof(arr)/sizeof(int);
	if((k)<0 || (k+n)>len)
	{
		printf("Invalid range\n");
	}
	else
	{
		for(i=n;i<k+n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		printf("Maximum value is:%d\n",max);
	}
}
void min(int *arr,int k,int n,int len)
{
	int i,min=arr[n];
        //int len=sizeof(arr)/sizeof(int);
        if((k)<0 || (k+n)>len)
        {
                printf("Invalid range\n");
        }
	else
	{
		for(i=n;i<k+n;i++)
		{
			
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		printf("Minimum value is:%d\n",min);
	}
}
int main()
{
	int arr[20],len,k,n,i;
	printf("Enter size of array:\n");
	scanf("%d",&len);
	printf("Enter size of the window:\n");
	scanf("%d",&k);
	printf("Enter the starting index\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is\n");
	for(i=0;i<len;i++)
	{
		printf("%d\n",arr[i]);
	}
	max(arr,k,n,len);
	min(arr,k,n,len);
}
