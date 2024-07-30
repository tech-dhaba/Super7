/*Function Pointers and Sorting

Write a C program that uses function pointers to sort an array of integers in ascending and descending order. Implement two comparison functions:

compareAsc(int a, int b): Returns a negative value if a < b, zero if a == b, and a positive value if a > b.
compareDesc(int a, int b): Returns a negative value if a > b, zero if a == b, and a positive value if a < b.
Write a sorting function sortArray(int *arr, int size, int (*cmpFunc)(int, int)) that takes an array, its size, and a comparison function pointer as arguments.*/

#include<stdio.h>

void swap(int *a,int *b){
  if(*a==*b)return;
  *a^=*b;
  *b^=*a;
  *a^=*b;
}

int compareAsc(int a,int b){
  if(a>b)return 1;
  if(a<b)return -1;
  return 0;
}

int compareDsc(int a,int b){
  if(a>b)return -1;
  if(a<b)return 1;
  return 0;
}

void qsort(int l,int r,int *arr,int (*cmpFunc)(int,int)){
  if(l>r)return;
  int i=l-1,j=i+1;
  for(;j<r;j++){
    if(cmpFunc(arr[r],arr[j])>0){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  i++;
  swap(&arr[i],&arr[r]);
  qsort(l,i-1,arr,cmpFunc);
  qsort(i+1,r,arr,cmpFunc);
}

int main(void){
  int arr[]={3,4,1,2,6,7,5,8,3,5};
  qsort(0,9,arr,compareDsc);
  for(int i=0;i<10;i++)printf("%d ",arr[i]);
  printf("\n");
  qsort(0,9,arr,compareAsc);
  for(int i=0;i<10;i++)printf("%d ",arr[i]);
  printf("\n");
}
