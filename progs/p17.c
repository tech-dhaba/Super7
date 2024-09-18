#include<stdio.h>

typedef struct MinMax{
  int min;
  int max;
}MinMax;

MinMax MaxEl(int *arr,int l,int r){
  int max=*(arr+l);
  int min=*(arr+l);
  for(int i=l+1;i<r;i++){
    max=max<arr[i]?arr[i]:max;
    min=min<arr[i]?min:arr[i];
  }
  MinMax _mm={min,max};
  return _mm;
}

int main(void){
  int arr[]={1,3,4,2,5,6,7,4,2,3,4,5};
  printf("%d %d\n",MaxEl(arr,2,9).min,MaxEl(arr,2,9).max);
}
      
