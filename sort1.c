#include<stdio.h>


int main(){
int a[4];
for(int i=0;i<4;i++){
scanf("%d\n",&a[i]);
}
for(int j=0;j<4;j++){
for(int i=j;i<4;i++){
if(a[i+1]<a[0]){
int temp=a[0];
a[0]=a[i+1];
a[i+1]=temp;
}
}
}
for(int i=0;i<4;i++){
printf("%d\n",a[i]);
}



return 0;
}
