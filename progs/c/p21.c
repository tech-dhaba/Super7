//Write a program that demonstrates the use of typedef to define a new data type

#include<stdio.h>

typedef int(*fnptr)(int,char*[]);//creating a function pointer type using typedef 

int main(int argc,char *argv[]){
  fnptr fn=main;//initializing a fnptr type with function main
  fn(argc--,argv);
}


