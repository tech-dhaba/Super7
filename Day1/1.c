#include<stdio.h>
void  swap(int *ptr1, int *ptr2) 
{       
	int t;
	t = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = t;
}
void main()
{ 
	int a,b;
	printf("Enter the first value :");
	scanf("%d",&a);
	printf("Enter the second value :");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After Swap %d %d ",a,b);
}
