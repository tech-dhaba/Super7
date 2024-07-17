#include<stdio.h>
int main(){
	int n;
	printf("Enter a binary number:");
	scanf("%d",&n);
	if(n & 1==0){
		printf("Enter no. is even");
	}
	else{
		printf("Enter no. is odd");
	}
	return 0;
}
