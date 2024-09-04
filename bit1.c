#include<stdio.h>

int main(){
int a=4;
int b=5;
printf("a is %d\n",a);
printf("b is %d\n",b);
printf("after swap\n");
printf("a is %d\n",(a^b)^a);
printf("b is %d",(a^b)^b);
return 0;
}
