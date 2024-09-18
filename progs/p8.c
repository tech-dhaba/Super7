#include<stdio.h>

void swp(int *x,int*y){
  if(*x==*y)return;
  *x^=*y;
  *y^=*x;
  *x^=*y;
}

int main(void){
  void (*fnptr)(int*,int*)=swp;
  int x=5,y=6;
  printf("%d %d\n",x,y);
  fnptr(&x,&y);
  printf("%d %d\n",x,y);
}
  
