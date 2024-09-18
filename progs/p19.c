#include<stdio.h>

#define  MUL(x) x*x

int main(){
  int a=0x320;
  unsigned char* z=(unsigned char*)&a;
  unsigned char c=*z;
  printf("%x\n",c);
  int val=10;
  printf("%d",MUL(++val));
}
