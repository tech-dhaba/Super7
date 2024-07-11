

#include <stdio.h>
#include <math.h>


void reversestring(char *str1){
    char temp;
    char *str2 = str1;
    while(*str2){
        str2++;
    }
    str2--;
while (str1 < str2) {
        temp = *str1;
        *str1 = *str2;
        *str2 = temp;
        str1++;
        str2--;
    }
}

int main()
{
    char input[100];
    printf("enter a string:");
    scanf("%s",input);
    reversestring(input);
    
    printf("reversed string:%s",input);

    
    
    

    return 0;
}