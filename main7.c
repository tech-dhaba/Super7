#include<stdio.h>

int main(){
char *ptr="mayank";
int a=5;
for(a;a>=0;a=a-1){
printf("%c",*(ptr+a));
}
return 0;
}
