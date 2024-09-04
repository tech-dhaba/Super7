#include<stdio.h>

void fun(int n){
if(n==0){
printf("hello\n");
}
else{
fun(n-1);
printf("n is %d\n",n);
}
}

int main(){
int n=5;
fun(5);

return 0;
}
