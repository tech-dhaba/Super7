//3. Sorting with Function Pointers:
//Implement a generic sorting algorithm that takes a function pointer as a comparison function. Use this to sort arrays of different data types (e.g., integers, floating-point numbers, strings).
#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<string.h>

void swap(void *a, void *b, int size) {
    char *p1 = (char *)a;
    char *p2 = (char *)b;
    char temp;
    for (int i = 0; i < size; i++) {
        temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int compare_int(void *a, void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_float(void *a, void *b) {
    float diff = (*(float *)a - *(float *)b);
    return (diff > 0) - (diff < 0);  // Returns 1, -1 or 0
}

int compare_string(void *a, void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

void generic_sort(void *arr, int n, int size, int (*cmp)(void*, void*)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            void *elem1 = (char *)arr + j * size;
            void *elem2 = (char *)arr + (j + 1) * size;
            if (cmp(elem1, elem2) > 0) {
                swap(elem1, elem2, size);
            }
        }
    }
}

int main() {
    // Sorting integers
    int int_array[] = {5, 2, 6, 9, 3, 1};
    int int_count = sizeof(int_array) / sizeof(int_array[0]);
    generic_sort(int_array, int_count, sizeof(int), compare_int);
    printf("Sorted integers: ");
    for (int i = 0; i < int_count; i++) {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    // Sorting floats
    float float_array[] = {3.14, 1.64, 3.97, 7.42, 2.54};
    int float_count = sizeof(float_array) / sizeof(float_array[0]);
    generic_sort(float_array, float_count, sizeof(float), compare_float);
    printf("Sorted floats: ");
    for (int i = 0; i < float_count; i++) {
        printf("%.2f ", float_array[i]);
    }
    printf("\n");

    // Sorting strings
    const char *string_array[] = {"APPLE", "ORANGE", "BANANA", "GRAPE"};
    int string_count = sizeof(string_array) / sizeof(string_array[0]);
    generic_sort(string_array, string_count, sizeof(char *), compare_string);
    printf("Sorted strings: ");
    for (int i = 0; i < string_count; i++) {
        printf("%s ", string_array[i]);
    }
    printf("\n");

    return 0;
}

