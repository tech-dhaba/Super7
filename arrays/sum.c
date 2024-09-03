//Write a function that takes an array of integers and its size as input. The function should return the sum of all elements in the array. Ensure that the function handles the case where the array index goes out-of-bounds.
#include<stdio.h>
void sum(int *arr,int n)
{
	int i,sum=0;
	if(n<=0 || n>4)
        {
                printf("Out of Bound\n");
        }
	for(i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of array elements till 4 is:%d\n",sum);
		
}
int main()
{
	int n,i,arr[4];
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
	sum(arr,n);
	return 0;
}
