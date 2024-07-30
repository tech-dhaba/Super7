#include<stdio.h>
#include<ctype.h>
void conertToupper(char *upper)
{
	while(*upper !='\0'){
	*upper=toupper(*upper);
	++upper;
	}
}
void printstring(const char *string)
{
	printf("the charcter\n");
	while(*string !='\0'){
	printf("%c",*string);
	++string;
	}
}
void f(const int **num){
	*num=100;
}
int main(){
 char string[]="TEjsawbHasKer";
 printf("string without any conversion %s\n",string);
 conertToupper(string);
 printf("string with conversion %s\n",string);
 char string1[]="tejsawbhasker";
 printstring(string1);
 int y;
 f(&y);
 printf("%d",y);
}
