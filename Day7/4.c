#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100 // Maximum size of the stack
typedef struct {
    int arr[MAX];
    int top;
} Stack;
void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void sortStack(Stack *s);
void sortedInsert(Stack *s, int value);
void printStack(Stack *s);
int main() {
    Stack s;
    initStack(&s);
    push(&s, 34);
    push(&s, 3);
    push(&s, 31);
    push(&s, 98);
    push(&s, 92);
    push(&s, 23);
    printf("Original stack:\n");
    printStack(&s);
    sortStack(&s);
    printf("Sorted stack:\n");
    printStack(&s);
    return 0;
}
void initStack(Stack *s) {
    s->top = -1;
}
int isEmpty(Stack *s) {
    return s->top == -1;
}
int isFull(Stack *s) {
    return s->top == MAX - 1;
}
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    s->arr[++(s->top)] = value;
}
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->arr[(s->top)--];
}
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return s->arr[s->top];
}
void sortStack(Stack *s) {
    if (!isEmpty(s)) {
        int temp = pop(s);
        sortStack(s);
        sortedInsert(s, temp);
    }
}
void sortedInsert(Stack *s, int value) {
    if (isEmpty(s) || peek(s) <= value) {
        push(s, value);
    } else {
        int temp = pop(s);
        sortedInsert(s, value);
        push(s, temp);
    }
}
void printStack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->arr[i]);
    }
}

