#include<stdio.h>
int main(){
	int *ptr1 , *ptr2;
	*ptr1=&ptr1;
	*ptr2=&ptr2;
	printf("%d",*ptr1);
	printf("%d",*ptr2);
	printf("%d", *ptr2-*ptr1);
}
