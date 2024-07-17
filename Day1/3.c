#include <stdio.h>
void swap(int *p, int *q)
{
	int c;
	c = *p;
	*p = *q;
	*q = c;
}
int main()
{
	int a[] = {1,2,3,4,5};
	int len = sizeof(a)/sizeof(int);
	for (int i=0; i<len/2; i++)
	{
		swap(&a[i],&a[len-i-1]);
	}
	printf("after reverse\n");
	for (int i=0; i<len; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}


