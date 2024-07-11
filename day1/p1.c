//Reverse a String (Pointers)

#include <stdio.h>

void revstr(char*_str, const unsigned int len){
  unsigned int left=0;
  unsigned int right=len-1;
  while(right-- >left++){
    _str[left]^=_str[right];
    _str[right]^=_str[left];
    _str[left]^=_str[right];
  }
}

int main(){
  char string[] = "hwllo thwre";
  revstr(string,sizeof string);
  printf("%s",string);
  return 0;
}


