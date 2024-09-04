#include<stdio.h>
int* getaddress(){
static int x =10;

return &x;//unsafe as x goes out of scoope after the function
}

int main(){
int *ptr;
ptr= getaddress();
printf("address is %ls\n",ptr);


return 0;
}
