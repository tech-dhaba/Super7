#include<stdio.h>
#include<string.h>
int str(char *s){
        int len=0;
        while(*s != '\0'){
            len++;
            s++;
        }
    return len;
}
int main(){
        char s[]="HelloWorld";
        printf("Length of the string %d",str(s));
        return 0;
}     
