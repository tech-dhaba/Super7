//Sorting with Function Pointers:
//Implement a generic sorting algorithm that takes a function pointer as a comparison function. 
//Use this to sort arrays of different data types (e.g., integers, floating-point numbers, strings).

#include<stdio.h>

void sortarray(void *arr, int size){
	for(int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if(arr[i] > arr[j]) {
				void temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    size = sizeof(arr) / sizeof(int);
    sortarray(arr, size);
    for (int i = 0; i < size; i++) {
        printf("Sorted Array: %d\n", arr[i]);
    }

    float Arr[] = {3.2, 1.5, 4.8, 2.1};
    size = sizeof(Arr) / sizeof(float);
    sortarray(Arr, size);
    for (int i = 0; i < floatSize; i++) {
        printf("Sorted Array: %f\n ", Arr[i]);
    }

    char *Array[] = {"Kushal", "Sarika", "Sanjana", "Shivam"};
    size = sizeof(Array) / sizeof(char);
    sortarray(Array, size);
    for (int i = 0; i < size; i++) {
        printf("Sorted Array :%s\n ", Array[i]);
    }
}

