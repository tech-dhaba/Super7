/*Write a C program that takes a dynamically allocated array of integers and its size as input. The program should then perform the following operations using pointers:

Find the Maximum Element: Traverse the array using pointers and find the largest element present. The program should print the index and value of the maximum element.
Reverse the Array: Reverse the order of elements in the array entirely using pointers. No additional arrays or data structures should be used. After reversing, the program should print the reversed array.
Remove Duplicates: Identify and remove all duplicate elements from the array. The program should modify the original array in-place (without allocating a new array) and return the new size of the array after removing duplicates.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
  unsigned int _size;
  int* arr;
  scanf("%d",&_size);
  if(_size==0)return 1;
  arr=calloc(sizeof(int),_size);
  for(int i=0;i<_size;i++)
    scanf("%d",&arr[i]);
  int MAX=arr[0];
  for(int i=0;i<_size;i++)
    MAX=(arr[i]>MAX)?arr[i]:MAX;
  printf("MAX: %d\n",MAX);
  unsigned int l=0,r=_size-1;
  while(l<r){
    if(arr[l]==arr[r]){
      l++;r--;
      continue;
    }
    arr[l]^=arr[r];
    arr[r]^=arr[l];
    arr[l]^=arr[r];
    l++;r--;
  }
  for(int i=0;i<_size;i++)
    printf("%d ",arr[i]);
  printf("\n");
  unsigned int uniq=_size;
  for(int i=0;i<_size;i++){
    for(int j=i+1;j<_size;j++){
      if(arr[j]==arr[i])uniq--;
    }
  }
  printf("No. of unique elements: %d\n",uniq);
  return 0;
}
