#include<stdio.h>


int main(){
int a;
scanf("%d\n",&a);
int count=0;
while(a){
if(a&1){
count=count+1;
}
a=a>>1;
}

if(count/2==0){
printf("even no of ones\n");
}
else{
printf("odd no of ones\n");
}

return 0;
}
