#include<stdio.h>
#include <stdlib.h>
void pointertoarray(int **arr, int size) {
    *arr = (int *)malloc(size * sizeof(int));
    if (*arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        (*arr)[i] = i * i; 
    }
}
int main() {
    int *array;       
    int size = 10; 
    pointertoarray(&array, size);
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf(" %d", &array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}

