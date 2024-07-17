//use of & and *
#include<stdio.h>



int main() {
    int a = 5, *p;
    char z = 'b', *q;
    float s = 9.67, *r;
    
    p = &a;
    q = &z;
    r = &s;

    printf("The values of int, char, and float are: %d, %c, %f\n", *p, *q, *r);
    printf("The addresses are: %p, %p, %p\n", (void*)p, (void*)q, (void*)r);

    return 0;
}
