//Linear Search: Write a C program to search for a given element in an array using a pointer-based implementation of linear search
#include<stdio.h>
int search(int *a, int len,int b)
{
	int i,n;
	for(i=0;i<len;i++)
	{
		if(*(a+i)==b)
		{
			return 1;
		}
		
	}
	return -1;

}
int main()
{
	int a[20],i,n,result;
	printf("Define size:");
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
	printf("Find no.5\n");
	result=search(a,n,5);
	if(result != -1)
	{
		printf("No. is present");
	}
	else
	{
		printf("No. is not present");
	}
	return 0;
}
