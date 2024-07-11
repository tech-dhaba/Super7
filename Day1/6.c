
#include <stdio.h>

int Max(int *arr, int size){
    if (size <= 0) return -1; // Handle empty array case

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int arr[] = {1, 3, 7, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxIndex = Max(arr, size);
    printf("Index of the largest element (iterative): %d\n", maxIndex);
    return 0;
}
