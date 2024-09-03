//Write a C function to check if a given stack is a palindrome. A palindrome is a sequence that reads the same backward as forward. Use the stack data structure for your solution
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct stack {
    int arr[MAX];
    int top;
};

void initializeStack(struct stack *st) {
    st->top = -1;
}

void push(struct stack *st, int value) {
    if (st->top >= MAX - 1) {
        printf("Stack overflow\n");
    } else {
        st->arr[++(st->top)] = value;
    }
}

int isPalindrome(struct stack *st) {
    for (int i = 0; i <= st->top / 2; i++) {
        if (st->arr[i] != st->arr[st->top - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    struct stack st;
    initializeStack(&st);

    push(&st, 10);
    push(&st, 12);
    push(&st, 15);
    push(&st, 12);
    push(&st, 10);

    if (isPalindrome(&st)) {
        printf("The stack is a palindrome\n");
    } else {
        printf("The stack is not a palindrome\n");
    }

    return 0;
}

