/*String Length Function Pointer: Create a function string_length that takes a character pointer (pointing to a string) as an argument and returns the length of the string (excluding the null terminator). Implement a main program that prompts the user for a string, calculates its length using the string_length function pointer, and prints the length.*/

#include<stdio.h>

unsigned int string_length(char* str){
  char* temp=str;
  unsigned int len=0;
  while(*temp){
    temp++;
    len++;
  }
  return len;
}

int main(void){
  char string[50];
  scanf("%s",string); 
  printf("%u",string_length(string));
  return 0;
}
