#include <stdio.h>
#define MAX_SIZE 100  // Define maximum size for the stack

// Define a structure to represent the stack
typedef struct {
    int item[MAX_SIZE];
    int top;
} stack;

// Initialize the stack
void initStack(stack *s) {
    s->top = -1;
}

// Push an element onto the stack
void push(stack *s, int value) {
    if (s->top < MAX_SIZE - 1) {
        s->item[++(s->top)] = value;
    } else {
        printf("Stack overflow\n");
    }
}

// Pop an element from the stack
int pop(stack *s) {
    if (s->top >= 0) {
        return s->item[(s->top)--];
    }
    printf("Stack underflow\n");
    return -1;  // Return a sentinel value for underflow
}

// Peek the top element of the stack without popping it
int peek(stack *s) {
    if (s->top >= 0) {
        return s->item[s->top];
    }
    printf("Stack is empty\n");
    return -1;  // Return a sentinel value for empty stack
}

// Function to find the next greater element for each element in the array
void greater(int *arr, int n) {
    stack s;
    initStack(&s);
    int result[MAX_SIZE];

    for (int i = n - 1; i >= 0; i--) {
        // Pop elements that are smaller than or equal to the current element
        while (s.top != -1 && peek(&s) <= arr[i]) {
            pop(&s);
        }

        // If stack is not empty, the top element is the next greater element
        if (s.top != -1) {
            result[i] = peek(&s);
        } else {
            result[i] = -1;  // No greater element found
        }

        // Push the current element onto the stack
        push(&s, arr[i]);
    }

    // Print the results
    for (int i = 0; i < n; i++) {
        if (result[i] == -1) {
            printf("No greater element for %d\n", arr[i]);
        } else {
            printf("Next greater element for %d is %d\n", arr[i], result[i]);
        }
    }
}

int main() {
    int n, arr[MAX_SIZE];
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    greater(arr, n);
    return 0;
}

