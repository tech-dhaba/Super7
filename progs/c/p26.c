#include \
<stdio.h>

struct{
  char first[10];
  int mindint;
  char last[20];
}sname,ename;

int main(){
  printf("%lu",sizeof(sname));
  printf("%lu",sizeof(ename));
}  
