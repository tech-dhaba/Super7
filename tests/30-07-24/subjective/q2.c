/*String Comparison with Custom Function
 
Implement a function that compares two strings and returns:

0 if the strings are equal.
A positive integer if the first string is lexicographically greater.
A negative integer if the first string is lexicographically smaller.
Write a function int customStrCmp(const char *str1, const char *str2) that performs this comparison. Use pointer arithmetic to traverse the strings.*/

#include<stdio.h>

int customStrCmp(const char *str1, const char *str2){
  int ans=0;
  while(*str1!='\0' && *str2!='\0'){
    ans+=*str1-*str2;
    str1++;
    str2++;
  }
  while(*str1!='\0'){
    ans+=*str1;
    str1++;
  }
  while(*str2!='\0'){
    ans-=*str2;
    str2++;
  }
  return ans;
}

int main(void){
  const char* s1="sujsjdkbfjkb";
  const char* s2="wuebflubfelwbf";
  printf("%s\n%s\n%d\n",s1,s2,customStrCmp(s2,s1));
}
