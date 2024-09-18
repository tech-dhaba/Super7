#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "shared_memory.h"

int main(int argc, char *argv[]){
  if(argc!=1){
    printf("usage - %s (no args)",argv[0]);
    return -1;
  }
  if(destroy_memory_block(FILENAME)){
    printf("destroyed memory block -%s",FILENAME);
  }else{
    printf("couldn't destroy memory block -%s",FILENAME);
  }
  return 0;
}
