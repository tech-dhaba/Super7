#include<stdio.h>
int main(){
	int a[3]={1,2,3};
	int len=sizeof(a)/4;
	int *ptr =a;
	ptr=a;
	for(int i=0;i<len;i++)
	{
		printf("value is %d\n",*(ptr+i));
	}
return 0;
}
