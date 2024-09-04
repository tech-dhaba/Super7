#include<stdio.h>


int main(){
char *ptr="hello world";
int a=10;
int i=0;
int size=0;
char *ptr1=NULL;
while(a){
if(*(ptr+i)==" "){
ptr1=ptr+i+1;	
break;
}
i=i+1;
a=a-1;
}
for(int j=0;j<=10-i-1;j=j-1){
printf("%c",*(ptr1+j));		
}
for(int z=0;z<=i+1;z=z+1){
printf("%c",*(ptr+z));
}


return 0;
}
