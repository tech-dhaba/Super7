#include <stdio.h>
int compareAsc(int a, int b) {
    return a - b;
}
int compareDesc(int a, int b) {
    return b - a;
}
void sortArray(int *arr, int size,int (*cmpFunc)(int ,int)){
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (cmpFunc(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    sortArray(arr, 10, compareAsc);
    printf("Sorted array in ascending order:\n");
    printArray(arr, 10);
    sortArray(arr, 10, compareDesc);
    printf("\nSorted array in descending order:\n");
    printArray(arr, 10);
    return 0;
}
