// regenration int using character pointer (little endian  system) lsb first 


#include<stdio.h>
#include<stdint.h>

int d(char* c){
  int z=0;
  z+=(uint8_t)*c;
  z+=(uint8_t)*(c+1)<<8;
  z+=(uint8_t)*(c+2)<<16;
  z+=(uint8_t)*(c+3)<<24;
  return z;
}

int main(void){
  int x=100101011;
  printf("%d\n",x);
  int*c=&x;
  printf("%d\n",d((char*)c));
}
