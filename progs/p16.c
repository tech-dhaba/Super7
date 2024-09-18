#include<stdio.h>
#include<string.h>

int main(void){
  char arr[100];
  memset(arr,-2,100);
  for(int i=0;i<100;i++)printf("%d ",arr[i]);
  return 0;
}
