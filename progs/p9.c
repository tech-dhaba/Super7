#include<stdio.h>

int main(void){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
  int i=1;
  int j=1;
  int count=40;

while(count !=1){
    if(j>40)j=40%j;
    if(i%7==0 && arr[j-1]!=0){
      printf("%d\n",arr[j-1]);
      arr[j-1]=0;
      count--;
    }
    i++;
    j++;
  }
}
