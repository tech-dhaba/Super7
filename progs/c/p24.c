//Write a program to concatenate two strings using strcat function

#include<stdio.h>
#include<string.h>

int main(void){
  char a[200]="hello ";
  char b[]="world";
  strcat(a,b);
  printf("%s\n",a);
}
