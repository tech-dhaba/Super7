#include<stdio.h>
#include<stdbool.h>
#define MAX 100

typedef struct{
int top;
int item[MAX];
}Stack;
void initial(Stack *stack){
   stack->top =-1;
}
bool isEmpty(Stack *stack){
   return(stack->top== -1);
}
bool isFull(Stack *stack){
   return (stack->top== MAX);
}
void push(Stack *stack,int num)
{
   if(isFull(stack)) { printf(" stack is full"); return;}
   else { stack->item[++stack->top]= num ;}
}int  pop(Stack *stack){
    return stack->item[stack->top--];
}
int max(Stack *s){
    int a[s->top];int ind;
    for(int i=0;i<s->top;i++) a[i]=s->item[i];
    int num =0;
    for(int i=0;i<s->top;i++){
      if(a[i]>num) {  num =a[i]; ind =i;}
}
    s->top =ind;pop(s);    
    return num; 
}
void revese(Stack * stack,Stack *s1){
      if (isEmpty(stack)) return;
      else {
      push(s1,pop(stack));
      revese(stack,s1);
}
}
int main(){
   Stack stack ;
   Stack s1;
   initial(&stack);
   initial(&s1);
   push(&stack,10);
   push(&stack,1355);
   push(&stack,145);
   push(&stack,1);
   push(&stack,123);
   push(&stack,15);
   printf("%d  is the mid of stack\n",stack.item[stack.top/2]);
   
   revese(&stack,&s1);
   int s=s1.top;
   printf("%d",s);
   for(int i=0;i<s;i++){
   printf("%d\n",s1.item[i]);
}  
   int c= max(&s1);
   printf("greatest no = %d\n",c);

}



