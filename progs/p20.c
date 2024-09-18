#include<stdio.h>
#include<string.h>

int main(){
  char a[]="/home/sbhad/repos/hello/world";
  //printf("%s\n",a);
  char* b=strtok(a,"/");
  printf("%s\n",a);
  printf("%s\n",b);
  char* c=strtok(NULL,"/");
  printf("%s\n",c);
  //printf("%s\n",strtok(NULL,"/"));
}
