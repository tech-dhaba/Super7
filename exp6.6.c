/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , y, a;
    printf("enter the value of x:");
    scanf("%d",&x);
    if(-5>x || x<6){
        a = x*x;
        y= 2*a+2*x-3;
        printf("value of y:%d",y);

    }

    return 0;
}