#include <stdio.h>
#include <stdbool.h>
#define MAX 100 
typedef struct {
    int top;
    int items[MAX];
} Stack;
void initialize(Stack* stack) {
    stack->top = -1;
}
bool isEmpty(Stack* stack) {
    return stack->top == -1;
}
bool isFull(Stack* stack) {
    return stack->top == MAX - 1;
}
void push(Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full!\n");
        return;
    }
    stack->items[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->items[stack->top--];
}
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->items[stack->top];
}
int main() {
    Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("%d popped from stack\n", pop(&stack));
    printf("Top element is %d\n", peek(&stack));
    return 0;
}
