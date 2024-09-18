#include "logger.h"

int log(){
  
  FILE* file=fopen(loc,"a");
  fprintf(file,
