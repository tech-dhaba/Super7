#include<stdio.h>

struct z{
  long long a:1;
  //char l;
  char w;
  char f;
  char m;
  //char z;
  int zz;
  char x;
  //char y;
  //long long zzz;
};

int main(void){
  struct z a;
 // a.a=1;
  //a.b=1<<30+4;
  printf("%d\n",sizeof(a));
  //printf("%d",a.b);
}
