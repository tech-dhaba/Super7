#include<stdio.h>
int main(){
int arr[3]={1,2,3};
int *ptr=arr;
int len=sizeof(arr)/sizeof(int);
for(int i=0;i<len;i++){

printf("value is %d",*(ptr+i));

  }
return 0;}
