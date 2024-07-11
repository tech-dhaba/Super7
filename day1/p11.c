/*Simple Menu with Function Pointers: Develop a C program that defines functions for different functionalities (e.g., one for printing a message, another for calculating an area). Utilize a function pointer and a switch statement based on user input to call the appropriate function.*/

#include<stdio.h>

void SayHi(float a){
  printf("%s\n","hi");
}

void PrintCircleArea(float radius){
  printf("%d",(int)(float)(6.28*radius));
}

void PrintSquareArea(float side){
  printf("%d",(int)(float)(side*side));
}

int main(void){
  void (*fn[3])(float)={SayHi,PrintCircleArea,PrintSquareArea};
  fn[2](3);
}
