//Bitwise Swapping:
//Without using a temporary variable, swap the values of two integer variables using only bitwise operators.
#include<stdio.h>
void swap(int x,int y)
{
	x^=y;
	y^=x;
	x^=y;
	printf("Numbers after swapping are:%d%d\n",x,y);
}
int main()
{
	int n,m;
	printf("Enter 2 nos:\n");
	scanf("%d%d",&n,&m);
	swap(n,m);
	return 0;
}
