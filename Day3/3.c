#include<stdio.h>
int main()
{
	int a[20],i,*p,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	p=a;
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==6)
		{
			printf("No. is present\n");
			break;
		}
	}
	return 0;
}
