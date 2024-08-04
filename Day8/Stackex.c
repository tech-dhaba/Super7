#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100 
struct Stack {
    int Top;
    char c[MAX];
};
void initStack(struct Stack *st) {
    st->Top = -1;
}
bool isEmpty(struct Stack *st) {
    return st->Top == -1;
}
bool isFull(struct Stack *st) {
    return st->Top == MAX - 1;
}
void push(struct Stack *st, char val) {
    if (!isFull(st)) {
        st->c[++(st->Top)] = val;
    }
}
char pop(struct Stack *st) {
    if (!isEmpty(st)) {
        return st->c[(st->Top)--];
    }
    return '\0';
}
bool palindrome(char str[]) {
    struct Stack st;
    initStack(&st);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        push(&st, str[i]);
    }
    for (int i = 0; i < len; i++) {
        if (str[i] != pop(&st)) {
            return false;
        }
    }
    return true; 
}
int main() {
    char str[MAX] ={'n','i','t','i','n'};
    if (palindrome(str)) {
        printf("Given string is a palindrome\n");
    } else {
        printf("Given string is not a palindrome\n");
    }
    return 0;
}

