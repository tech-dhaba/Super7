/*String Manipulation with Macros

Define macros for common string manipulation tasks like finding the length, comparing strings, and converting uppercase to lowercase.
*/

#define len(x) strlen(x)
#define cmp(x,y) strcmp(x,y)

#include <stdio.h>
#include <string.h>

int main(void){
  char str1[]="hi there!";
  //char str2[]="hi there!";
  char str2[]="hello there!";
  printf("%lu\n",len(str1));
  printf("%u\n",cmp(str1,str2));
}
