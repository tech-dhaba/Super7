/*Create a program that uses an array to store student grades and calculates the
average grade.*/

#include<stdio.h>

float CalcAvg(int arr[],unsigned int len){//function to calculate average from the given array
  int sum=0;
  for(int i=0;i<len;i++)sum+=arr[i];
  return (float)((float)sum/(float)len);
}

int main(void){
  int arr[]={32,36,39,31,46,55,91};
  printf("%f\n",CalcAvg(arr,sizeof(arr)/sizeof(int)));
}
