#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int (*calc)(int,int);

int add(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mul(int x,int y){return x*y;}
int divv(int x,int y){return y==0?0:x/y;}

enum calc{
  ADD,
  SUB,
  MUL,
  DIV,
};

int calculator(int x,int y,calc *_calc,char *_func){
  switch (_func[0]){
    case 'a':return _calc[ADD](x,y);
    case 's':return _calc[SUB](x,y);
    case 'm':return _calc[MUL](x,y);
    case 'd':return _calc[DIV](x,y);
  }
}

int main(int argc,char *argv[]){
  assert(argc==4);
  calc _calc[]={add,sub,mul,divv};
  printf("result is %d\n",calculator(atoi(argv[2]),atoi(argv[3]),_calc,*(argv+1)));
}

