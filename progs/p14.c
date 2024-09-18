#include<stdlib.h>
#include<stdio.h>

int stoi(char *str){
  int ans=0;
  while(*str!='\0'){
    ans+=*str-'a';
    str++;
  }
}

void ssort(char *arr[],int len){
  int *a=malloc(sizeof(int)*len);
  for(int i=0;i<len;i++)
    a[i]=stoi(arr[i]);
  


int main(void){
  char *c[]={"cherry","apple","banana"};

  
}
