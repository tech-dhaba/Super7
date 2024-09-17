//Dynamic Array: Implement a dynamic array data structure that can dynamically resize itself as needed.
//Pointer Arithmetic: Write a function to find the address of the nth element in an array without using pointer arithmetic.
//Pointer to Function: Create a function that takes a pointer to another function as an argument and calls that function.
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} DynamicArray;
void initArray(DynamicArray *arr, size_t initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initialCapacity;
}
void resizeArray(DynamicArray *arr, size_t newCapacity) {
    int *newData = (int *)realloc(arr->data, newCapacity * sizeof(int));
    if (newData) {
        arr->data = newData;
        arr->capacity = newCapacity;
    } else {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}
void appendArray(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        resizeArray(arr, arr->capacity * 2);
    }
    arr->data[arr->size++] = value;
}

void freeArray(DynamicArray *arr) {
    free(arr->data);
}

int main() {
    DynamicArray arr;
    initArray(&arr, 2);

    appendArray(&arr, 10);
    appendArray(&arr, 20);
    appendArray(&arr, 30);

    for (size_t i = 0; i < arr.size; i++) {
        printf("%d ", arr.data[i]);
    }
    printf("\n");

    freeArray(&arr);
    return 0;
}

