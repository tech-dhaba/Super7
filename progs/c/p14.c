
typedef struct{
  int a;
  int b;
  int(*fptr)(int,char**);
}str;


int main(int argc,char*argv[]){
  str _str={1,2,main};
  _str.fptr(argc,argv);
}
