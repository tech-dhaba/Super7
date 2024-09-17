//Pointer to Pointer:

//Create a function that takes a pointer to a pointer as an argument and modifies the value pointed to by the inner pointer.
#include<stdio.h>
void modify(int **ptr,int n)
{
	**ptr=n;
}
int main()
{
	int val,n;
	printf("Enter value\n");
	scanf("%d",&val);
	int *p=&val;
	int **pp=&p;
	printf("Enter value to be changed with:\n");
	scanf("%d",&n);
	modify(pp,n);
	printf("New value is:%d\n",val);
	return 0;
}
