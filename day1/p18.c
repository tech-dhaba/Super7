#include <stdio.h>

typedef struct{
  int a;
  void (*fptr[10])(void*,void*);
}str;

void swap(str s,unsigned int _size){
  unsigned int size=sizeof str;


