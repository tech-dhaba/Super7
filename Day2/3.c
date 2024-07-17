#include<stdio.h>
int sum(int *arr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+= arr[i];
	}
	return sum;
}
int main()
{
	int arr[50],i,n;
	printf("Enter the lenght of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements are:");
	for(i=0;i<n;i++)
        {
                printf(" %d\n",arr[i]);
        }
	printf("\n");
	int total=sum(arr,n);
	printf("sum is:%d",total);
	return 0;

}


