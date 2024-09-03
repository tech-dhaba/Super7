//Function Pointers and Sorting

//Write a C program that uses function pointers to sort an array of integers in ascending and descending order. Implement two comparison functions:

//compareAsc(int a, int b): Returns a negative value if a < b, zero if a == b, and a positive value if a > b.
//compareDesc(int a, int b): Returns a negative value if a > b, zero if a == b, and a positive value if a < b.
//Write a sorting function sortArray(int *arr, int size, int (*cmpFunc)(int, int)) that takes an array, its size, and a comparison function pointer as arguments.
#include<stdio.h>
int compareAsc(int a,int b)
{
	return a-b;
}
int compareDesc(int a,int b)
{
	return b-a;
}
int sort(int *arr,int size,int(*cmpfunc)(int,int))
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(cmpfunc(arr[j],arr[j+1])>0)
			{//swap

				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[20],n,a,b,i;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	sort(arr,n,compareAsc);
	printf("array in ascending is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
	sort(arr,n,compareDesc);
	printf("Array in descending is:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
	return 0;
}
