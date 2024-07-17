#include<stdio.h>

int main()
{
	int a[30],i,n,*p;
	printf("Enter size:\n");
	scanf("%d",&n);
	p=a;
	printf("enter values for array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}
