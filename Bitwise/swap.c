//Write a function to swap two numbers using bitwise XOR. For example, swapping a = 5 and b = 7 should result in a = 7 and b = 5.
#include<stdio.h>
void swap(int x,int y)
{
	y=x^y;
	x=x^y;
	y=x^y;
	printf("%d %d",x,y);
}
int main()
{
	int n,m;
	printf("Enter 2 nos.:\n");
	scanf("%d %d",&n,&m);
	swap(n,m);
	return 0;
}

