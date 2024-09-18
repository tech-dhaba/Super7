#include <stdio.h>

typedef struct {
  int a;
  int b;
  char c;
}S;

void swap(S *s,unsigned int size){
  int l=0,r=size-1;
  while(l<r){
    s[l].a^=s[r].a;
    s[r].a^=s[l].a;
    s[l].a^=s[r].a;
    s[l].b^=s[r].b;
    s[r].b^=s[l].b;
    s[l].b^=s[r].b;
    s[l].c^=s[r].c;
    s[r].c^=s[l].c;
    s[l].c^=s[r].c;
    l++;r--;
  }
}

int main(void){
  S s[100];
  swap(s,100);
}

