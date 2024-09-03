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
void dispstack(Stack *stack){
   if(isEmpty(stack)){
    printf("stack is empty\n");
}
   printf("The stack element\n");
   for(int i = 0;i <= stack->top;i++){
    printf("%d ",stack->items[i]);
 
}
printf("\n");
}
bool palindrome(Stack *stack){
int l = stack->top +1;
int array[l];
for(int i =0;i<l;i++){
 array[i]=stack->items[i];
 printf("%d \n",array[i]);
}
int left = 0;
int right = l- 1;
    
    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }
     return true;
}
int main() {
    Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 10);
    printf("Top element is %d\n", peek(&stack));
    dispstack(&stack);
    bool c=palindrome(&stack);
    if (c) {printf("palindrome\n");}
    else  printf("not a palindrome\n");
    return 0;
}
