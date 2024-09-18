/*Create a stack data structure that accepts a callback function as a parameter. When an element is pushed onto the stack, the callback function is called with the pushed element as an argument. Implement a function to push elements onto the stack, and another function to pop elements from the stack.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *top = NULL;

void push(int data, void (*callback)(int)){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    callback(data);
}

void pop(){
    if(top == NULL){
        printf("Stack is empty\n");
        return;
    }
    node *temp = top;
    top = top->next;
    free(temp);
}

void display(int data){
    printf("Element pushed: %d\n", data);
}

int main(){
    push(10, display);
    push(20, display);
    push(30, display);
    pop();
    pop();
    pop();
    pop();
    return 0;
}
