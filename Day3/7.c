
#include <stdio.h>
int find_missing_number(int arr[], int size) {
    int all = 0;
    int a = 0;
    for (int i = 1; i <= size + 1; i++) {
        all ^= i;
    }
    for (int i = 0; i < size; i++) {
        a ^= arr[i];
    }
    return all ^ a;
}
int main() {
    int arr[] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = find_missing_number(arr, size);
    printf("The missing number is %d\n", result);
  return 0;
}




