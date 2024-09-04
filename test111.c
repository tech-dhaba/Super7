#include<stdio.h>
#include<stdbool.h>
#define MAX 4
typedef struct{
int top;
int arr[MAX];
}Stack;

void initiate(Stack*stack){
stack->top=1;
}
bool isfull(Stack *stack){
if(stack->top==MAX){
return 1;
}
else{
return 0;
}
}
bool isempty(Stack *stack){
if(stack->top==0){
return 1;
}
else{
return 0;
}
}
int pop(Stack *stack){
if(isempty(stack)){
return 1;		
}
else{
return stack->arr[stack->top--];
}
}
void push(Stack *stack,int item){
if(isfull(stack)){
printf("full");
}
else{
printf("value is %d\n",stack->arr[stack->top++]);
}
}

int call_pop(Stack*stack,Stack1*stack1,size){
if(size==0){
return stack1->arr[stack1->top--]=pop(&stack);
}
else{
return call_pop(Stack*stack,Stack1*stack1,size-1);
printf("value is %d\n",stack->arr[stack->top]);
}
}

int main(){
Stack stack;
Stack stack1;
initiate(&stack);
initiate(&stack1);
push(&stack,1);
push(&stack,2);
push(&stack,3);
push(&stack,4);
call_pop(&stack,&stack1,5);





return 0;
}




