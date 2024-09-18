//this program reverses a string

#include<stdio.h>
#include<string.h>

static char *revstr(const int len, char str[]){
  int i=0;
  while(i<len/2){
    if(str[i]==str[len-i-1]){
      i++;
      continue;
    }
    str[i]^=str[len-i-1];
    str[len-i-1]^=str[i];
    str[i]^=str[len-i-1];
    i++;
  }
  return str;
}

static int main(void){
  char str[10];
  scanf("%s",str);
  int len=strlen(str);
  printf("%s\n",revstr(len,str));
  return 0;
}
