#include<stdio.h>

void print2darr(int arr[2][2]){
  int i=0,j=0;
  while(*arr){
    while(**arr){
      printf("%d ",**(arr+i));
      i++;
    }
    j++;
  }
}

int main(void){
  int a[2][2]={{1,2},{3,4}};
  print2darr(a);
}
