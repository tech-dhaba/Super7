#include<stdio.h>
int main(){
	int a[5]={0,1,2,3,4};
	int n;
	printf("Enter an element you want to find:");
	scanf("%d",&n);
	int *ptr=a;
	int len=sizeof(a)/sizeof(int);
	ptr=a;
	for(int i=0;i<len;i++){
		if(n==a[i])
			printf("Element is found at %d",i);
	}
return 0;
}

