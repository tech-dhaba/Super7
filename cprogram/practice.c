#include<stdio.h>
#include<string.h>

int main(void)
{
//	char*ptr;
	char *ptr="hello";
	int n = sizeof(ptr)/sizeof(char);
	n =strlen(ptr);
	printf("%d",n);

}
