/*Implement a generic sorting algorithm that takes a function pointer as a comparison function. Use this to sort arrays of different data types (e.g., integers, floating-point numbers, strings).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
    void *temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

void sort(void *arr, size_t n, size_t size, int (*cmp)(const void *, const void *)) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cmp(arr + i * size, arr + j * size) > 0) {
                swap(arr + i * size, arr + j * size, size);
            }
        }
    }
}

int cmp_int(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int cmp_float(const void *a, const void *b) {
    return *(float *)a - *(float *)b;
}

int cmp_str(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
} 

int main() {
    int arr1[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    float arr2[] = {3.14, 1.41, 5.92, 6.53, 5.89, 7.9};
    char *arr3[] = {"pi", "e", "phi", "tau"};

    sort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp_int);
    sort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp_float);
    sort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp_str);

    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        printf("%.2f ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%s ", arr3[i]);
    }
    printf("\n");

    return 0;
}
