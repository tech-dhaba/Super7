#include<stdio.h>
void swap(int *ptr1,int *ptr2){
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
};
int main(){
	int a[5]={0,1,2,3,4};
	int len=sizeof(a)/sizeof(int);
	int i;
	for(i=0;i<len/2;i++){
		swap(&a[i],&a[len-i-1]);
	}
	int *ptr=a;
	ptr=a;

	for(i=0;i<len;i++)
	{
		printf("value is %d\n:",*(ptr+i));
	}
return 0;
}
