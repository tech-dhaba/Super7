#include<stdio.h>

int main(){
int x=0X1235;
int *ptr=&x;
int *y=ptr;
printf("size %d\n",ptr);
printf("size of y:%c,%d\n",*((char*)y),((char*)y));
printf("size of y+1:%c,%d\n",*((char*)(y)+1),((char*)y+1));
printf("size of y+2
		:%c,%d\n",*((char*)(y)+2),((char*)y+2));
printf("size of y+3:%c,%d\n",*((char*)(y)+3),((char*)y+3));


return 0;
}
