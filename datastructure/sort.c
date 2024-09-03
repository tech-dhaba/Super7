//Sort a Stack: Sort a stack using another temporary stack.
#include<stdio.h>
#define max 50
typedef struct
{
	int item[max];
	int top;
}stack;
void isempty(stack *st)
{
	st->top=-1;
}
void isfull(stack *st)
{
	st->top=max-1;
}
void push()
