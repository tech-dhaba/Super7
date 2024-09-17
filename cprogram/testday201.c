//Create a function that dynamically allocates memory for a structure containing an integer, a float, and a character array.
//Write a function to populate this structure with user-provided data.
//Finally, create a function to print the contents of the structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int integer;
    float floating;
    char str[10];
} MyStruct;
MyStruct* createStruct() {
    MyStruct* newStruct = (MyStruct*)malloc(sizeof(MyStruct));
    if (newStruct == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return newStruct;
}
void populateStruct(MyStruct* myStruct) {
    if (myStruct == NULL) {
        printf("Structure pointer is NULL\n");
        return;
    }
    printf("Enter an integer: ");
    scanf("%d", &myStruct->integer);
    printf("Enter a float: ");
    scanf("%f", &myStruct->floating);
    while (getchar() != '\n');
    printf("Enter a string (up to 10 characters): ");
    fgets(myStruct->str, sizeof(myStruct->str), stdin);
    size_t len = strlen(myStruct->str);
    if (len > 0 && myStruct->str[len - 1] == '\n') {
        myStruct->str[len - 1] = '\0';
    }
}
void printStruct(const MyStruct* myStruct) {
    if (myStruct == NULL) {
        printf("Structure pointer is NULL\n");
        return;
    }
    printf("Integer: %d\n", myStruct->integer);
    printf("Float: %.2f\n", myStruct->floating);
    printf("String: %s\n", myStruct->str);
}
int main() {
    MyStruct* myStruct = createStruct();
    populateStruct(myStruct);
    printStruct(myStruct);
    free(myStruct);
    return 0;
}

