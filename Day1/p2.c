#include<stdio.h>

int main(){
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p);
//	printf("address is %x\n",p);
	return 0;
}

