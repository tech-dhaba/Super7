//Explain pointer arithmetic. How does adding or subtracting an integer value to/from a pointer affect it?
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial address: %p\n", (void*)ptr);
    printf("Initial value: %d\n", *ptr);

    ptr++; // Increment pointer
    printf("Address after ptr++: %p\n", (void*)ptr);
    printf("Value after ptr++: %d\n", *ptr);

    ptr += 2; // Add 2 to pointer
    printf("Address after ptr += 2: %p\n", (void*)ptr);
    printf("Value after ptr += 2: %d\n", *ptr);

    ptr--; // Decrement pointer
    printf("Address after ptr--: %p\n", (void*)ptr);
    printf("Value after ptr--: %d\n", *ptr);

    return 0;
}

