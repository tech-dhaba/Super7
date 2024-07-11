/*Swap Function: Implement a function swap that takes two integer pointers as arguments and swaps the values of the variables they point to. Utilize this function with a main program that prompts the user for two numbers, swaps them using the swap function, and prints the swapped values.*/

#include<stdio.h>

void SWAP(int *num1, int *num2){
  if(*num1==*num2)return;
  *num1^=*num2;
  *num2^=*num1;
  *num1^=*num2;
  return;
}

int main(void){
  int num1,num2;

  scanf("%d%d",&num1,&num2);
  SWAP(&num1,&num2);
  printf("%d %d",num1,num2);
  return 0;
}

