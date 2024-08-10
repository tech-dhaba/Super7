#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
        printf("%d ", array[i]);

    }
    printf("\n");

    free(array);

    return 0;
}


#elif 0
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m;
	printf("Enter the number of element of n: ");
	scanf("%d",&n);
	printf("Enter the number of element of m: ");
	scanf("%d",&m);
	int *array = (int*)malloc(n*m* sizeof(int));
	if(array == NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	for(int i = 0; i<n ; i++)
	{
		printf("\n");
		for(int j=0 ; j<m ; j++)
			{

				printf("i j [%d] [%d] \t",i,j);
				*(array+i+j)=i+j+1;
				printf("%d\t",*(array+i+j));
			}
	}
printf("\n");
free(array);
return 0;
}


#elif 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Allocate memory for the 2D arrays
    int **array1 = (int **)malloc(m * sizeof(int *));
    int **array2 = (int **)malloc(m * sizeof(int *));
    int **result = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        array1[i] = (int *)malloc(n * sizeof(int));
        array2[i] = (int *)malloc(n * sizeof(int));
        result[i] = (int *)malloc(n * sizeof(int));
    }

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    // Add the two arrays
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the resulting array
    printf("Resulting array after addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < m; i++) {
        free(array1[i]);
        free(array2[i]);
        free(result[i]);
    }
    free(array1);
    free(array2);
    free(result);

    return 0;
}

#else
#endif
