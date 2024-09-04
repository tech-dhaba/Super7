#include<stdio.h>


int main(){

int a[7]={4,4,5,5,6,7,7};
int b=7;
int count=0;
for(int j=0;j<=7;j++){
for(int i=0;i<=7-j;i++){
if((a[j]^a[i])==0){
printf("value is %d\n",a[j]);
}
}}
return 0;
}
