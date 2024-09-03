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
void swap(int *a,int *b){
   int c=*a;
   *a=*b;
   *b=c;
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
  }
int pop(Stack* stack) {
      if (isEmpty(stack)) {
          printf("Stack is empty!\n");
          return -1;
      }
      return stack->items[stack->top--];
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
void sorting(Stack *stack){
     int l = stack->top +1;
     int  array[l];
     for(int i =0;i<l;i++){
     array[i]=stack->items[i];
 }    
     int minIndex, temp;
    for (int i = 0; i < l - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < l; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
             swap(&array[i],&array[minIndex]);}
        }
// printf("%d",stack->top);
 //   while (stack->top != -1) {
   //     pop(stack);
   // }
for(int i=0;i<=l;i++){
 printf("%d \n",pop(stack));
}

 
   for(int i=0;i<l;i++){
        push(stack,array[i]);
}
}
 int main() {
    Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 25);
    push(&stack, 13);
    push(&stack, 2);
    push(&stack, 29);
    push(&stack, 12);
    push(&stack, 16);
    sorting(&stack);
    dispstack(&stack);
    return 0;
 }
