//reverse using recursion
#include<stdio.h>
#define max 50
typedef struct
{
        int item[max];
        int top;
}stack;
void initialize(stack *st)
{
        st->top=-1;
}
int isempty(stack *st)
{
        return st->top==-1;
}
int isfull(stack *st)
{
        return st->top==max-1;
}
void push(stack *st,int value)
{
        if(isfull(st))
        {
                printf("OVERFLOW\n");
        }
        st->item[++(st->top)]=value;
        printf("%d\n",value);
}
int pop(stack *st)
{
        if(isempty(st))
        {
                printf("UNDERFLOW\n");
        }
        return st->item[(st->top)--];
}
int reverse(stack *st)
{
	if(!isempty(st))
	{
		return reverse(stack *st);
	}
	else
		return 0;
}
