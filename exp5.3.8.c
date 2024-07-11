/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    int num;
    for(i=0; i<10;++i){
        printf("\nenter.:",i+1);
        scanf("%d",&i);
        num+=i;
        printf("\nsum:%d",num);
        printf("\nmean:%d",num/10);
    }


    return 0;
}