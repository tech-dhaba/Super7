#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows = 3;
    int cols = 3;
    int i, j;
    int **array = (int **)malloc(rows * sizeof(int *));
    if (array == NULL) {
        printf("Failed to allocate memory for rows");
    }
 else {
    for (i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
        if (array[i] == NULL) {
            printf("Failed to allocate memory for columns");
            for (int k = 0; k < i; k++) {
                free(array[k]);
            }
            free(array);
return 0;
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            array[i][j] = i * cols + j; 
        }
    }
    printf("2D Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}
}

