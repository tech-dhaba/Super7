#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a, b;
    int min, max;
    printf("Enter the beginning of index:\n");
    scanf("%d", &a);
    printf("Enter the ending of index:\n");
    scanf("%d", &b);
    min = arr[a];	
    max = arr[a];
    for (int i = a; i <= b; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Min %d\n", min);
    printf("Max %d\n", max);
    return 0;
}

