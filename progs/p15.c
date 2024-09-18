#include <stdio.h>
#include <stdlib.h>

#define MAX 100 

typedef struct Stack {
    int top;
    int items[MAX];
} Stack;

void initializeStack(Stack *s) {
    s->top = -1;
}

int isEmptyStack(Stack *s) {
    return s->top == -1;
}

int isFullStack(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFullStack(s)) {
        printf("Stack is full!\n");
        return;
    }
    s->items[++s->top] = value;
    printf("%d pushed to stack\n", value);
}

int pop(Stack *s) {
    if (isEmptyStack(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    printf("%d popped from stack\n", s->items[s->top]);
    return s->items[s->top--];
}

void displayStack(Stack *s) {
    if (isEmptyStack(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

 int main() {
     Stack s;
     initializeStack(&s);

     push(&s, 10);
     push(&s, 20);
     push(&s, 30);
     push(&s, 40);
     push(&s, 50);

     displayStack(&s);

     pop(&s);
     pop(&s);

     displayStack(&s);

     push(&s, 60);
     push(&s, 70);

     displayStack(&s);

     return 0;
 }
