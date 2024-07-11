#include<stdio.h>

int main(){
	int *p,*q,a,b,z;
	a=5;
	b=6;
	p=&a;
	q=&b;
	z=*p+*q;
	printf("Sum=%d",z);



	return 0;
}
