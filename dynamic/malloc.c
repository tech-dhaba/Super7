#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *array = (int *)malloc(n * sizeof(int));

    // Check if malloc succeeded
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Initialize the array with values
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}
