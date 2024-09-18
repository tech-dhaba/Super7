//calculator program using function pointer
#include <stdio.h>

typedef int (*fp)(int,int);
int sum(int operand1,int operand2){
  return operand1+operand2;
}
int subtract(int operand1,int operand2){
  return operand1-operand2;
}
int multiply(int operand1,int operand2){
  return operand1*operand2;
}
int divide(int operand1,int operand2){
  //printf("%s",__func__);
  return operand1/operand2;
}

enum{
  ADD=0,SUB,MUL,DIV,MAX
};

int main(void){
 printf("hi");
 
//fp operation[4]={sum,subtract,multiply,divide};
//int (*operation)(int,int)[4]={sum,subtract,multiply,divide};
int(*operation[MAX])(int,int)=  {sum,subtract,multiply,divide};
  

 int operand1=3;
 int operand2=8;
 int op=-1;
 scanf("%d",&op);
 switch (op){
   
   case ADD:{
    printf("%d%s:%s:%s:%s",operation[ADD](operand1,operand2),__FILE__,__func__,__TIME__,__DATE__);

    break;
    }
   case SUB:{
    printf("%d",operation[SUB](operand1,operand2));
    break;
    }
   case MUL:{
    printf("%d",operation[MUL](operand1,operand2));
    break;
    }
   case DIV:{
    printf("%d",operation[DIV](operand1,operand2));
    break;
    }
   
 }

  return 0;
}
