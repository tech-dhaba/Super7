/*Implement a C program to find the largest of three numbers using nested if-else
statements*/

#include<stdio.h>

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int max=a;
  if(a<b)if(b<c)max=c;
  else max=b;
  else if(a<c)max=c;
  printf("%d",max);
}
