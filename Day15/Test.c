/*Write a C program that implements a stack using an array. The program should use function pointers to perform operations like push, pop, and check if the stack is empty. Additionally, after every operation, use bitwise operators to manipulate a global variable that tracks the number of push and pop operations.

Input:
Choose an operation:
1 for Push (push the user-input value)
2 for Pop
3 for Check Empty
The stack size is fixed at 16, and operations are performed using function pointers.*/

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 16

typedef struct {
    int top;
    int data[STACK_SIZE];
} Stack;

int count = 0;

// Function prototypes
void push(Stack* stack, int value);
int pop(Stack* stack);
int isEmpty(Stack* stack);
void updateCounter(int operation);
void handleOperation(Stack* stack, int choice);

// Function pointers for operations
void (*pushOp)(Stack*, int) = push; // Push operation
int (*popOp)(Stack*) = pop; // Pop operation

void handleOperation(Stack* stack, int choice) {
    int value;
    switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            pushOp(stack, value);
            break;
        case 2:
            value = popOp(stack); // Call pop directly
            if (value != -1) {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            printf("Stack is %s\n", isEmpty(stack) ? "empty" : "not empty");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
}

void push(Stack* stack, int value) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++stack->top] = value;
        printf("Pushed %d onto the stack.\n", value);
        updateCounter(1);
    } else {
        printf("Stack overflow! Cannot push %d.\n", value);
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        int value = stack->data[stack->top--];
        printf("Popped %d from the stack.\n", value);
        updateCounter(0);
        return value;
    } else {
        printf("Stack underflow! Cannot pop.\n");
        return -1;
    }
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void updateCounter(int operation) {
    if (operation) {
        count++;
    } else {
        count--;
    }
    printf("Current operation count: %d\n", count);
}

int main() {
    Stack stack = { .top = -1 };
    int choice;

    while (1) {
        printf("Choose an operation:\n");
        printf("1 for Push (input value)\n");
        printf("2 for Pop\n");
        printf("3 for Check Empty\n");
        printf("0 to Exit\n");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        handleOperation(&stack, choice);
    }

    return 0;
}

