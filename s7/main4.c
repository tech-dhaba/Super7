#include<stdio.h>


int main(){
int arr[]={1,2,3,4,5};
int *ptr=arr;

int len=sizeof(arr)/sizeof(int);


for(int i=0, temp=0;i<len/2;i++){

int temp=*(ptr+len-i-1);//s
*(ptr+len-1-i)=*(ptr+i);//w
*(ptr+i)=temp;//a
//p

}
for(int i=0;i<len;i++){
printf("arr value is: %d\n",*(ptr+i));
}
return 0;
}
