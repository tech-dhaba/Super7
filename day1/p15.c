#include<stdio.h>

void swapp(int* x){
  if(*x==*(x+1))return;
  *x^=*(x+1);
  *(x+1)^=*x;
  *x^=*(x+1);
}

int main(void){
  int x[]={8,9};
  printf("%d %d\n",*x,*(x+1));
  swapp(x);
  printf("%d %d\n",*x,*(x+1));
}
