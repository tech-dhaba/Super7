#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  
typedef struct {
    char items[MAX];
    int top;
} Stack;
void initStack(Stack *stack) {
    stack->top = -1;  // Initialize top to -1 indicating the stack is empty
}
void push(Stack *stack, char item) {
    if (stack->top < MAX - 1) {  // Check for stack overflow
        stack->items[++stack->top] = item;
    } else {
        printf("Stack overflow!\n");
    }
}
char pop(Stack *stack) {
    if (stack->top >= 0) {  
        return stack->items[stack->top--];
    } else {
        printf("Stack underflow!\n");
        return '\0';  
    }
}
void reverseString(char *str) {
    Stack stack;
    initStack(&stack);
    for (int i = 0; str[i] != '\0'; i++) {
        push(&stack, str[i]);
    }
    int i = 0;
    while (stack.top != -1) {
        str[i++] = pop(&stack);
    }
    str[i] = '\0';  
}
int main() {
    char str[MAX];
    printf("Enter a string to reverse: ");
    printf("tejsaw\n");
    strcpy(str,"tejsaw");
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

