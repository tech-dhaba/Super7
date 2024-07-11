/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int range;
    int num;
    int sum=0;
    int s=0;
    range = 20;
    while(1){
        scanf("%d",&num);
        
        s += num;//sum = sum +num
        printf("sum %d",s);
        if (s>range){
            printf("exiting beacuse of range exceeded\n");
            break;
        }
    }

    return 0;
}