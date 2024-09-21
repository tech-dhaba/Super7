#include<stdio.h>

struct Stack st{
	int top;
	int size;
	void(*FP)(struct Stack*);
}st;

st createstack(int size, FP fp) {

	st *stack = (stack*)malloc(sizeof(stack));
	stack->size = size;
	stack->top = -1;
	stack->fp = fp;
	return st;
}

int isFull(st *stack) {
	return stack->top == stack->size-1;
}

int isEmpty(st *stack) {
	return stack->top == -1;
}

void push(st *stack int data) {
	if(isFull(stack)) {
		printf("Stack Overflow");
		return top;
	}
	stack->top = item; 
    if (stack->fp) {
        stack->fp(item);
    }
}

void pop(st *stack) {
	if(isEmpty(stack)) {
		printf("Stack Underflow");
		return -1;
	 }
	return stack->top--;
}

void myFP(int item) {
    printf("Pushed: %d\n", item);
}

int main() {

    	st *stack = createStack(5, myFP);

    	push(stack, 10);
    	push(stack, 20);
    	push(stack, 30);
    	printf("Popped: %d\n", pop(stack));
    	printf("Popped: %d\n", pop(stack));
}

