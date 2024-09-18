#include<stdio.h>
/*
2 example with a static variable
3 */

void f(void);

int main(void)
{
    f();
    f();
    f();
    return 0;
}

void f(void)
{
    static int i = 5; /* static variable (local to function f) */
    printf("i = %d \n", i);
    i++;
}
