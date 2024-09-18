/*Develop a C program to demonstrate bitwise operations by checking if a number
is even or odd using bitwise AND.
*/

#include<stdio.h>

int main(void){
  int num;
  scanf("%d",&num);
  num&1?printf("ODD"):printf("EVEN");
}
