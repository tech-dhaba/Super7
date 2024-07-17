// Write a C program to find the minimum and maximum elements in an array using pointers
#include<stdio.h>

int max(int *a,int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(*(a+i)>max)
		{
			max=*(a+i);
		}
	}
	return max;

}
int min(int *a,int n)                                                                                                                {
        int i,min=*a;
        for(i=0;i<n;i++)
        {
                if(*(a+i)<min)
                {
                        min=*(a+i);
                }
        }
        return min;

}
int main()
{
	int a[20],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:");
	for(i=0;i<n;i++)
        {
                printf("%d",a[i]);
        }
	printf("Maximum in array is :%d\n",max(a,n));
	printf("Minimum in array is: %d\n",min(a,n));
	return 0;
}
