//Problem: Swap two numbers without using a temporary variable using bitwise XOR.
//Challenge: Optimize the solution for large numbers or multiple swaps.

#include <stdio.h>
void swap(int array[], int i, int j) {
    array[i] = array[i] ^ array[j];
    array[j] = array[i] ^ array[j];
    array[i] = array[i] ^ array[j];
}
void mulSwap(int array[], int size, int arr[][2], int num) {
    for (int k = 0; k < num; k++) {
        int i = arr[k][0];
        int j = arr[k][1];
        if (i >= 0 && i < size && j >= 0 && j < size) {
            swap(array, i, j);
        }
    }
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int arr[][2] = {{0, 1}, {2, 3}, {1, 4}};
    int num = sizeof(arr) / sizeof(int);
    printf("Array before swaps: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    mulSwap(array, size, arr, num);
    printf("Array after swaps: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

