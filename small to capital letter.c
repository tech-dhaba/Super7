#include <stdio.h>
#include <stdlib.h>

int main(){
    char in[100];
    char out[100];
    printf("enter a string:");
    gets(in);
    convert(in,out);
    printf("in =%s\n Out = %s\n",in,out);
    
    return 0;
}

void convert (char in[],char out[]){
    int i = 0;
    while((out[i] = in[i]) !='\0'){
        if(out[i]>='a' && out [i]<='z') out [i] +='A' -'a';
        i++;
    }
}