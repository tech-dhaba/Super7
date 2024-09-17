//Create a function that dynamically allocates memory for a structure containing an integer, a float, and a character array.
//Write a function to populate this structure with user-provided data.
//Finally, create a function to print the contents of the structure.
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100

typedef struct {
    int int_val;
    float float_val;
    char str[MAX_STR_LEN];
} MyStruct;

MyStruct* create_structure() {
    MyStruct* ptr = (MyStruct*)malloc(sizeof(MyStruct));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    return ptr;
}


void populate_structure(MyStruct* ptr) {
    if (ptr == NULL) {
        printf("Invalid structure pointer!\n");
        return;
    }

    printf("Enter an integer: ");
    scanf("%d", &ptr->int_val);

    printf("Enter a float: ");
    scanf("%f", &ptr->float_val);

    printf("Enter a string: ");
    scanf("%s", ptr->str);
}


void print_structure(const MyStruct* ptr) {
    if (ptr == NULL) {
        printf("Invalid structure pointer!\n");
        return;
    }

    printf("Integer: %d\n", ptr->int_val);
    printf("Float: %.2f\n", ptr->float_val);
    printf("String: %s\n", ptr->str);
}

int main() {
    MyStruct* my_struct = create_structure();

    populate_structure(my_struct);

    print_structure(my_struct);

    free(my_struct);

    return 0;
}


