//Given an array of n integers from 1 to n+1 with one number missing, write a function to find the missing number using bitwise XOR.
#include <stdio.h>
int findMissingNumber(int *a, int n) {
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        x ^= a[i];
    }
    for (int i = 1; i <= n + 1; i++) {
        y ^= i;
    }
    return x ^ y;
}

int main() {
    int a[20], i, n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    //if (n > 19) {
      //  printf("Array size exceeds the limit of 20.\n");
       // return 1;
    //}
    printf("Enter %d elements of the array (from 1 to %d with one missing):\n", n, n + 1);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int missingNumber = findMissingNumber(a, n);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

