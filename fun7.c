#include <stdio.h>

int a, b;
void func();
/* global variables */
/* function declaration */
int main(void)
{
    a = 5;
    b = 7;
    printf("in the main function a = %d and b = %d\n", a, b);
    func();
    printf("after the function call a = %d and b = %d\n", a, b);
    return 0;
}
void func()
{
    int b;
    a = 15;
    b = 17;
    /* local variable, the global var “a” is invisible */
    printf("in the function a = %d and b = %d\n", a, b);
}
