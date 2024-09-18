/*Write a recursive function to calculate the nth Fibonacci number. Write a program
to test this function.*/

#include<stdio.h>
#include<stdlib.h>

unsigned long long FiboDp[512]={0};//initializing a global array to store fibonacci sequences

unsigned long long fibo(unsigned int n){//function to calculate nth fibonacci number using DP
  if(n<3){//base case
    FiboDp[0]=1;
    FiboDp[1]=1;
    return 1;
  }
  int fibo_n=FiboDp[n-1];//searching in array if value is already present
  if(fibo_n==0){//if not recursively calling the function
    fibo_n=fibo(n-1)+fibo(n-2);
    FiboDp[n-1]=fibo_n;
  }
  return fibo_n;//returning the nth fibonacci number
}

int main(void){
  unsigned int n=5;
  printf("%llu\n",fibo(n));
  //for(int i=0;i<10;i++){
    //n=random()%511+1;
    //printf("%u\n",n);
    //printf("%llu\n",fibo(n));
  //}
}
