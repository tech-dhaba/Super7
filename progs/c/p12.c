#include<stdio.h>
//#include<stdbool.h>

int main(void){
  _Bool b=5;
  _Bool* a=&b;
  void *ptr=NULL;
  //void ab;
  //(int)ab=8;
  int x=8;
  (int*)ptr=&x;
  printf("%p",ptr);
  printf("%p",a);
}
