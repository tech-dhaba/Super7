#include<stdio.h>

int main(){
	int a;
	void *p;
	a=10;
	p=&a;
	printf("%d",*(int *)p);
	return 0;
}

