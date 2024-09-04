#include<stdio.h>

typedef void(*fptr)(int *);

void  modify(int *arr,fptr fp){
 fp(arr);
}
void  doub(int *arr){
for(int i=0;i<3;i++){
*(arr+i)=(*(arr+i))*2;
}
}
void squ(int *arr){
for(int i=0;i<3;i++){
*(arr+i)=(*(arr+i))*(*(arr+i));
}
}

void mul(int *arr){
int a;
scanf("%d",&a);
for(int i=0;i<3;i++){
*(arr+i)=(*(arr+i))*a;
}
}

int main(){

int arr[3]={1,2,3};
fptr fp[3]={mul,squ,doub};
for(int i=0;i<3;i++){
modify(arr,fp[i]);
if(i==0){
printf("after mul\n");}
else if(i==1){
printf("after square\n");
}
else{
printf("after mul\n");
}
for(int j=0;j<3;j++){
printf("value is %d\n",arr[j]);
}}






return 0;
}
