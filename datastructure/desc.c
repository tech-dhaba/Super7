//descending in stack
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
void greater(stack *st)
{
	int i=0,j,k,arr[st->top];
	while(!isempty(st))
	{
		arr[i++]=pop(st);
	}
	for(j=0;j<=i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(arr[j]>arr[k])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
		//printf("%d",arr[i]);
	}
	//for(i=0;i<st->top+1;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
	//printf("%d\n",arr[i]);
	printf("stack in descending order is:\n");
	for(j=0;j<i;j++)
	{
		push(st,arr[j]);
	}
}
void mid_value(stack *st)
{
	int x,y,i,j;
	if((st->top)%2==0)
	{
		for(i=0;i<(st->top)/2;i++)
		{
			x=pop(st);
		}
			printf("mid-value is:\n%d\n",x);
	}
	else
	{

                for(i=0;i<=(st->top)/2+1;i++)
                {
                        y=pop(st);
                }
                        printf("mid-value is:\n%d\n",y);
	}
}
int main()
{
	stack s;
	initialize(&s);
	push(&s,7);
	push(&s,10);
	push(&s,9);
	push(&s,6);
	push(&s,8);
	push(&s,3);
	push(&s,5);
	greater(&s);
	mid_value(&s);
	return 0;
}
