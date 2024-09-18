#include<stdio.h>

void func(int *arr){
  for(int i=0;i<5;i++)scanf("%d",&arr[i]);
}

int main(void){
  int arr[]={1,2,3,4,5};
  func(arr);
  for(int i=0;i<5;i++)printf("%d",arr[i]);
}
