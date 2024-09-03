#include<stdio.h>
#define size_of 
int main()
{
	int *p=(int)0x7600;
	int *x=p;
	int *y=++p;
	printf("size of is:%d",((char*)y-(char*)x));
	return 0;
}
