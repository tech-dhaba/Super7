#include<stdio.h>
 int swap(int *x, int *y){
	 int temp;
	 temp=*x;
	 *x=*y;
	 *y=temp;
	 //printf("%d%d",*x,*y);
	// return *x*y;

 }

int main(){
	int a,b;
	printf("Enter the value:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("result is %d%d",a,b);
	return 0;
}

