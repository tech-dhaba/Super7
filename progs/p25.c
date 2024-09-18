#include<stdio.h>

typedef struct{
  int data;
  void (*processData)(int*);
  void (*viewHex)(int);
  void (*viewBin)(int);
}DataProcessor;

void viewHex(int n){
  printf("%X\n",n);
}

void viewBin(int n){
  int count=31;
  while(count>=0){
    printf("%d",1&n>>count);
    count--;
  }
  printf("\n");
}

void increment(int* n){
  ++(*n);
}

void square(int* n){
  *n*=*n;
}

int main(void){
  DataProcessor dp={4,square,viewHex,viewBin};
  dp.processData(&dp.data);
  printf("%d\n",dp.data);
  dp.viewHex(dp.data);
  dp.viewBin(dp.data);
  DataProcessor dp1={4,increment,viewHex,viewBin};
  dp1.processData(&dp1.data);
  printf("%d\n",dp1.data);
  dp1.viewHex(dp1.data);
  dp1.viewBin(dp1.data);
}
