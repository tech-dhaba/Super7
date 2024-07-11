#include<stdio.h>
#include<unistd.h>
#include<linux/unistd.h>
#include <pthread.h>

int _start(){
  printf("%d",4);
  return 0;
  //pthread_exit(0);
  //_exit(2);
}
