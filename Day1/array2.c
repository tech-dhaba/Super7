#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum element in the array
void findMaxElement(int* arr, int size) {
    int* maxPtr = arr;
    for (int*          maxPtr = ptr;
        }
    }
    printf("Maximum element is %d at index %ld\n", *maxPtr, maxPtr - arr);
}

// Function to reverse the array
void reverseArray(int* arr, int size) {
    int* startPtr = arr;
    int* endPtr = arr + size - 1;
    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        startPtr++;
        endPtr--;
    }
    printf("Reversed array: ");
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

// Function to remove duplicates from the array
int removeDuplicates(int* arr, int size) {
    if (size == 0) {
        return 0;
    }
    int* writePtr = arr;
    for (int* readPtr = arr + 1; readPtr < arr + size; readPtr++) {
        if (*readPtr != *writePtr) {
            *(++writePtr) = *readPtr;
        }
    }
    return writePtr - arr + 1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }

    findMaxElement(arr, size);
    reverseArray(arr, size);

    int newSize = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
