#include "add.h"  
#include "sub.h"  
#include "mul.h"  
#include "div.h"  

#include <stdio.h>

int main(void){
  int(*_op[4])(int,int)={add,sub,mul,div};
  int operand1,operand2;
  int oper;scanf("%d%d%d",&oper,&operand1,&operand2);
  printf("%d\n", _op[oper](operand1,operand2));
  return 0;
}

