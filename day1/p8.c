/*Simple Calculator: Write a C program that takes two integers and an operation code (+, -, *, /) as input. Define functions for addition, subtraction, multiplication, and division. Create a function pointer that points to one of these functions based on the operation code. Call the appropriate function pointer with the two integers and print the result.*/

#include <stdio.h>

int sub(int x,int y){return x-y;}
int mul(int x,int y){return x*y;}
int div(int x,int y){return x/y;}
int add(int x,int y){return x+y;}

int OPSYMBOL[]={
  ['+']=0,
  ['-']=1,
  ['x']=2,
  ['/']=3,
};

int main(void){

  int (*operation[4])(int,int)={add,sub,mul,div};
  int operand1,operand2;
  char opsymbol;

  scanf("%c%d%d",&opsymbol,&operand1,&operand2);
  printf("%d\n",operation[OPSYMBOL[opsymbol]](operand1,operand2));

  return 0;
}

