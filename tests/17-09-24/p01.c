/*Create a function table containing pointers to different functions. Use this table to invoke the appropriate function based on an input value.*/

#include <stdio.h>
#include <stdlib.h>

struct func_table
{
    void (*func_ptr)();
};

void func1()
{
    printf("Function 1\n");
}

void func2()
{
    printf("Function 2\n");
}

void func3()
{
    printf("Function 3\n");
}

int main()
{
    struct func_table table[3] = {{func1}, {func2}, {func3}};
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 3)
    {
        printf("Invalid choice\n");
        exit(1);
    }
    table[choice - 1].func_ptr();
    return 0;
}
