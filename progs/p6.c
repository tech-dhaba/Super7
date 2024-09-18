#include<stdio.h>

void Toupper(char *c){
   *c-=32;
}

int main(void){
  char arr[] = "hi how are you";
  printf("%ld\n",sizeof(arr));
  Toupper(arr);
  printf("%s",arr);
}
