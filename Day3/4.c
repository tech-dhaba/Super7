#include<stdio.h>

int main()
{
	int a[50],n,*p,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	p=a;
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	int c=4;
	printf("Modified array is:\n");
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+c;
		printf("%d\n",*(p+i));
	}
	return 0;
}
