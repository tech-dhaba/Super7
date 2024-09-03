//5. Find the Only Non-Duplicated Element
//Given an array where every element appears twice except for one, write a function to find the single non-duplicated element using bitwise XOR.
#include<stdio.h>
int nd(int *a,int n)
{
	int x=0,i,r=0;
	for(i=0;i<n;i++)
	{
		r^=a[i];
	}
	return r;
}
int main()
{
	int n,a[20],i;
	printf("size is\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
	printf("Non-duplicate no. is %d\n",nd(a,n));
	return 0;
}
