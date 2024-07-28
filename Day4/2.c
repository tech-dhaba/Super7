#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *sptr);
int main(void)
{
        char string[]="cHaRaCters and $32.98";
        printf("The string before conversion is: %s",string);
        convertToUppercase(string);
        printf("\n The string after conversion is : %s\n",string);
}
void convertToUppercase(char *sptr)
{
        while (*sptr != '\0')
        {
                *sptr = toupper(*sptr);
                ++sptr;
        }
}

