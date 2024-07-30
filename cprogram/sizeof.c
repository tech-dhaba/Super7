#include <stdio.h>
#define SIZEOF(data) ((char*)(&((data*)0)[1]) - (char*)((data*)0))

int main() {
    printf("Size of int: %d\n", SIZEOF(int));
    printf("Size of char: %d\n", SIZEOF(char));
    printf("Size of double: %d\n", SIZEOF(double));
    int x=5;
    printf("%d",SIZEOF(x));
    return 0;
}

