#include<stdio.h>

#define swap(x,y)(int temp=x; x=y; y=temp;)
 int main(){
	 int x,y,r;
	 printf("Enter two nos. :");
	 scanf("%d%d",&x,&y);
	 r=swap(x,y);
	 printf("result is %d:",r);
	 return 0;
 }
