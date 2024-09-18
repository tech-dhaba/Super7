#include<stdio.h>

int a(){
  int x=3;
  return sizeof(x);
}

int main(void){
  int x=5;
  int *w=&x;
  int *y=w++;
  int *z=++w;
  printf("%ld %d\n",(char*)z-(char*)y,a());
}
