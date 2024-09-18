/*Write a C program that reads a string and counts the number of vowels,
consonants, digits, and spaces.
*/

#include<stdio.h>

int main(void){
  char str[]="thjis is a 13 23 234 string comtaining vowels consonants spaces and numer";
  int vowels=0,consonants=0,digits=0,spaces=0;
  for(int i=0;i<sizeof(str);i++){
    if(str[i]==' ')spaces++;
    if(str[i]>='0' && str[i]<='9')digits++;
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')vowels++;
    else consonants++;
  }
  printf("vowels: %d",vowels);
  printf("consonants: %d",consonants);
  printf("digits: %d",digits);
  printf("spaces: %d",spaces);
}
