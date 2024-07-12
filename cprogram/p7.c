#include<stdio.h>
//int ar[100];
static int a;
typedef struct node{
 int n ;
 char c;
 int a;
} node;

int main()
{
	printf("%d",sizeof(node));
	return 0;
}
