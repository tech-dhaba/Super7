//Write a C program to reverse a string using a stack implemented with an array. Explain the logic behind your program.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX 10
struct stack
{
        int top;
        char arr[MAX];
};
bool isempty(struct stack *st)
{
        return (st->top == -1);
}
bool isfull(struct stack *st)
{
        return (st->top == MAX-1);
}
char pop(struct stack *st)
{
        printf("pop top is %d\n",st->top);
        if(isempty(st))
                return '\0';
        return (st->arr[st->top--]);
}
void push(struct stack *st,char data)
{
        if(isfull(st))
                return -1;
        st->arr[++st->top]=data;
        printf("push top is %c \t data is %c\n",st->top,data);
}
void reverse(char str[])
{
        int len=strlen(str);
        struct stack s;
        int i;
        s.top=-1;
        for(i=0;i<len;i++)
        {
                push(&s,str[i]);
        }
        for(i=0;i<len;i++)
        {
                str[i]=pop(&s);
        }
}
int main()
{
	struct stack st;
	char str[MAX];
	printf("enter string:\n");
	scanf("%s",&str);
	reverse(str);
	printf("\nReverse string is:%s\n",str);
	return 0;
}
