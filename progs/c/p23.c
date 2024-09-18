//Create a program that reads and prints a multi-dimensional array

#include<stdio.h>

int main(void){
  int arr[2][2]={{1,2},{3,4}};
  for(int i=0;i<2;i++){for(int j=0;j<2;j++)printf("%d ",arr[i][j]);printf("\n");}
}
