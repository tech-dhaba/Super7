//Problem: Given an array where every element appears twice except for one, find the single element using bitwise operations
//Challenge: Implement a solution that is efficient for large arrays and handles edge cases.

#include <stdio.h>
int findSingleElement(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result ^= arr[i];  
    }
    return result;
}
int main() {
    int array[] = {4, 1, 2, 1, 2, 3, 4}; 
    int size = sizeof(array) / sizeof(array[0]);
    int singleElement = findSingleElement(array, size);
    printf("The single element is: %d\n", singleElement);
}

