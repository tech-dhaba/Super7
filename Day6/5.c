#include <stdio.h>
typedef void (*ptr)(int);
void parray(int arr[], int size, ptr callback) {
    for (int i = 0; i < size; i++) {
        callback(arr[i]);
    }
}
void printa(int a) {
    printf("Element: %d\n", a);
}
void doublea(int a) {
    printf("Doubled: %d\n", a * 2);
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Using printElement callback:\n");
    parray(array, size, printa);
    printf("\nUsing doubleElement callback:\n");
    parray(array, size, doublea);
    return 0;
}

