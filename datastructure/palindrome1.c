//Palindrome for a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define max 50
typedef struct
{
	int top;
	char str[max];
}stack;
void initialize(stack *st)
{
	st->top=-1;
}
bool isempty(stack *st)
{
	return st->top==-1;
}
bool isfull(stack *st)
{
	return st->top==max-1;
}
void push(stack *st,char c)
{
	if(isfull(st))
	{
		printf("OVERFLOW\n");
		return'\0';
	}
	return st->str[++(st->top)]=c;
}
char pop(stack *st)
{
	if(isempty(st))
	{
		printf("UNDERFLOW\n");
		return '\0';
	}
	return st->str[(st->top)--];
}
bool palindrome(char *string)
{
	int len=strlen(string);
	stack st;
	initialize(&st);
	for(int i=0;i<len;i++)
	{
		push(&st,string[i]);
	}
	for(int i=0;i<len;i++)
	{
		if(string[i] != pop(&st))
		{
			return false;
		}

	}
	free(st.str);
	return true;
}
int main()
{
	char str[max];
	printf("enter a string:\n");
	scanf("%s",&str);
	str[strcspn(str,"\n")]=='\0';
	for(int i=0;str[i];i++)
	{
		str[i]=tolower(str[i]);
	}
	if(palindrome(str))
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}
