#include<aio.h>

struct apna_mallox{
char arr[2000];
unsigned int used;
void *ptr;
}apna_mallox;

void *_mallok(size_t _size){
  apna_mallox.used+=_size;
  apna_mallox.ptr=&apna_mallox.arr[2000-apna_mallox.used];
  return apna_mallox.ptr;
}

int main(void){
  struct apna_mallox mallox;
  mallox.used=0;
  mallox.ptr=&apna_mallox.arr[2000-apna_mallox.used];
  void *ptr=_mallok(5);
  return 0;
}
