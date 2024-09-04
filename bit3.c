//bitwise reversing
#include<stdio.h>

int main(){
int new_num=0;
int a=23;
int b;
int count=0;
while(a){
count=count+1
a>>1;
}
while(a){
int i=1;	
b=a&1;
new_num=+b<<(count-i);
a=a>>1;}
printf("reversed no is %d\n",sum);
i=i+1;
return 0;
}
