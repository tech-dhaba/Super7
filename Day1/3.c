#include<stdio.h>
void read(int *,int *);
void swap(int *,int *);

int main(void){
	int a,b;
	read(&a,&b);
	printf("\nBefore the function call: a = %d and b = %d\n", a, b);
	swap(&a,&b);
	printf("\nAfter the function call: a = %d and b = %d\n", a, b);
	return 0;
}

void read(int *x,int *y)
{
	printf("Enter 2 nos:");
	scanf("%d %d",x,y);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
