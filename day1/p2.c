//Find the Largest Element in an Array (Pointers)

#include <stdio.h>

int FindMax(int *arr,unsigned int size){
  int MAX=*arr;
  int index=0;
  while(index<size){
    MAX=(arr[index]>MAX)?arr[index]:MAX;
    index++;
  }
  return MAX;
}

int main(void){
  int arr[] = {0,'2',33,'e',55,33,1,2,4,111,2,5,'s'};
  int size=sizeof(arr)/sizeof(int);
  printf("%d\n",size);
  printf("%d\n",FindMax(arr,size));
  for(int i=0;i<size;i++)printf("%d ",arr[i]);
  return 0;
}
