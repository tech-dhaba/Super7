/*String Tokenization

Write a function that tokenizes a string based on a delimiter. The function should:

Return a list of tokens (strings) split by the delimiter.
Use dynamic memory allocation to store tokens*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* mystrtok(char* str, char delim){
  char *temp=str;
  while(*temp!=delim && *temp!='\0')temp++;
  char *c=malloc((int)(temp-str));
  strncpy(c,str,temp-str+1);
  c[temp-str]='\0';
  return c;
}

int main(void){
  char*_str = "helloZZ! world !";
  char *_token=mystrtok(_str,'!');
  printf("%s\n",_token);
}

