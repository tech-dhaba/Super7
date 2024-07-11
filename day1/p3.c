//Swap Two Variables (Pointers)

#include <stdio.h>

void SwapVar(int* Var1,int* Var2){
  if(*Var1==*Var2)return;
  *Var1^=*Var2;
  *Var2^=*Var1;
  *Var1^=*Var2;
}

int main(void){
  int x=4,y=5;
  printf("[BEFORE] %d, %d\n",x,y);
  SwapVar(&x,&y);
  printf("[AFTER] %d, %d",x,y);
  return 0;
}
