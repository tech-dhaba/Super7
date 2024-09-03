//Implement a basic calculator to evaluate a simple expression string. The expression string may contain open ( and close parentheses ), the plus + or minus sign -, non-negative integers, and empty spaces.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 50
typedef struct
{
	char str[max];
	int top;
}stack;
void initialize(stack *st)
{
	st->top=-1;
}
bool isempty(stack *st)
{
	return(st->top=-1);
}
bool isfull(stack *st)
{
	return (st->top=max-1);
}
void push(stack *st,char c)
{

}
