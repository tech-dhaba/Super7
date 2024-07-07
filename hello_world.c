#include <unistd.h>

int main(void){
  char hello[]="hello world";
  (void)write(1,hello,11);
}

