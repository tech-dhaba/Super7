#include<stdio.h>

int main(void){
  int a[2][2]={{1,2},{3,4}};
  printf("%d",*(*(a)+1));
}
