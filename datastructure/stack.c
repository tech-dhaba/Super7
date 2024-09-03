//STACK
#include<stdio.h>
#include<stdbool.h>
#define MAX 5
struct stack
{
	int top;
	int arr[MAX];
};
bool isempty(struct stack *st)
{
	return (st->top == -1);
}
bool isfull(struct stack *st)
{
	return (st->top == MAX-1);
}
int pop(struct stack *st)
{
	printf("pop top is %d\t",st->top);
	if(isempty(st))
		return -1;
	return (st->arr[st->top--]);
}
void push(struct stack *st,int data)
{
	if(isfull(st))
		return -1;
	st->arr[++st->top]=data;
	printf("push top is %d \t data is %d\n",st->top,data);
}
int main()
{
	struct stack st;
	memset(&st.arr,0,(MAX));
	st.top=-1;
	push(&st,10);
	push(&st,2);
	push(&st,3);
	while(!(isempty(&st)))
	{
		printf("data is %d\n",pop(&st));
	}
	return 0;
}
