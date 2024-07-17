#include<stdio.h>



int main(){
int arr[]={1,2,3,4,5};
int *ptr;
ptr=arr;
int len=sizeof(arr)/sizeof(int);
for(int i=0;i<len;i++){
*(ptr+i)=(2)<<(*(ptr+i));
printf("%d\n",*(ptr+i));

}
return 0;

}
