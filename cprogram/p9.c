#include<stdio.h>
#define SWAP(x,y) fpt(x,y)
void swap(int *a,int *b)
{
	int c=*a;
	    *a=*b;
	    *b=c;
}
int main()
{
	int a=9;
        void (*fpt)(int*,int*);
	int b=10;
	printf("first = %d\n sec= %d\n",a,b);
	fpt=swap;
	fpt(&a,&b);
	printf("first = %d\n sec= %d\n",a,b);
}
