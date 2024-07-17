#include<stdio.h>
#include<math.h>
int main(){
	int a[]={1,2,3,4,5};
	int *ptr=a;
	int base;
	ptr=a;
	int len=sizeof(a)/sizeof(int);
	printf("Enter a base number:");
	scanf("%d",&base);
	for (int i=0;i<len;i++){
		printf("New array %lf\n:",pow(base,*(ptr+i)));
	}
return 0;
}
