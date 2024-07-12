// swap to variable using pointer
#include <stdio.h>
 void swap(int *a,int*b)
 	{
		int l=*a;
		*a=*b;
		*b=l;
		printf("no after been swaped %d ,%d\n",*a,*b);
	}
int main ()
{
int a,b;
 printf("enter the no to be swaped ");
 scanf("%d",&a);
 scanf("%d",&b);
 swap(&a,&b);
 return 0; 
}
