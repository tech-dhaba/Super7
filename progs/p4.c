#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(int argc,char*argv[]){
  char c='a';
  srand(time(NULL));
  while(1){
  int x=rand()%26;
  printf("%c\n",c+x);
  printf("%c\n",c+x-32);
  sleep(2);
  } 
}
