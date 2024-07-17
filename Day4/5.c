//Write a function that swaps the values of two variables using only bitwise XOR.
#include<stdio.h>
void swap(int a, int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Resultant no. is:%d %d\n",a,b);
}
int main()
{
	int a,b;
	printf("Enter nos. to be swapped:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	swap(a,b);
//	printf("Resultant no. is:%d %d\n",a,b);
	return 0;
}
