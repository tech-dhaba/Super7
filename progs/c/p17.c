/*Write a function that takes an integer array and its size as arguments and returns
the largest element in the array. Write a program to test this function*/

#include<stdio.h>

int MaxElem(int arr[],unsigned int len){  //function to calculate Max element in the given array
  int Max=arr[0];//inttialize variable Max to first array element
  for(int i=1;i<len;i++)Max=(arr[i]>Max)?arr[i]:Max;//iterate over the array and update Max if element with greater value is found using ternary operator
  return Max;//return the Max variable storing the max element
}

int main(void){
  int arr[]={2,3,1,0,-1,4,67,32,45,-111,68,34,69};//creating a dummy array
  printf("%d\n",MaxElem(arr,sizeof(arr)/sizeof(int)));//printing the max value from dummy array
}
