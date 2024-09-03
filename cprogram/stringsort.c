#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortStrings(char **strings, int count) {
    char *temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}
void printStrings(char **strings, int count) {
    for (int i = 0; i < count; i++) {
        printf("%s\n", strings[i]);
    }
}
void freeMemory(char **strings, int count) {
    for (int i = 0; i < count; i++) {
        free(strings[i]);
    }
    free(strings);
}
int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char **strings = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        strings[i] = (char *)malloc(100 * sizeof(char)); 
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }
    sortStrings(strings, n);
    printf("\nSorted Strings:\n");
    printStrings(strings, n);
    freeMemory(strings, n);
    return 0;
}
