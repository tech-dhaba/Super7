//program to serialize and deserialize a struct
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct{
  int x;
  int y;
  char c;
  char d;
  char e;
  char f;
  char g;
  char h;
  char i;
  //char j;
}a;

void serialize(a *_a,const char* path){
  int fd= open(path,O_WRONLY);
  (void)write(fd,_a,sizeof *_a);
  close(fd);
}

void deserialize(a *_a,const char* path){
  int fd= open(path,O_RDONLY);
  (void)read(fd,_a,sizeof *_a);
  close(fd);
}

int main(){
   a _a;
  _a.x=5;
  _a.y=6;
  printf("%ld\n",sizeof(a));
  _a.c=0b00111111;
  _a.d=0b00111011;
  _a.e=0b00111110;
  _a.f=0b00110111;
  _a.g=0b00101111;
  _a.h=0b00110101;
  _a.i=0b00110011;
  //_a.j=0b00101111;
  serialize(&_a,"./a");
  a _b;
  deserialize(&_b,"./a");
  printf("%d\n%d\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n",_b.x,_b.y,_b.c,_b.d,_b.e,_b.f,_b.g,_b.h,_b.i); 
}
