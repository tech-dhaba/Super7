#include<stdio.h>

void func(int arr[],int x){
  for(int i=0;i<x;i++)scanf("%d",&arr[i]);
}

int main(void){
  int x;
  scanf("%d",&x);
  int arr[x];
  func(arr,x);
  for(int i=0;i<x;i++)printf("%d ",arr[i]);
}
