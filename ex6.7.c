/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void printline(int num, char c){
    for (int i = 0; i < num; i++) {
        putchar(c);
    }
    putchar('\n');
}

int main()
{
    printline(10,'#');
    printline(5,'*');
    printline(9,'@');
    printline(7,'$');

    

    return 0;
}