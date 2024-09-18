#include<signal.h>
#include<stdio.h>
#include<unistd.h>

void sig(int sig){
  printf("SIGINT RECEIVED  %d",sig);
}

int main(void){
  signal(SIGINT,sig);
  while(1){
    printf("1111111111111111");
    sleep(1);
  }
} 
