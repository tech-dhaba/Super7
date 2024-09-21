/*4. Bitwise Operators in a Stack with Function Pointers for Conditional Checks
Implement a stack where, after every push operation, a bitwise shift operation modifies the pushed value. Use a function pointer to dynamically select if the value should be left-shifted (<<) or right-shifted (>>) depending on the stack depth (even/odd number of elements).

Input:
Choose an operation:
1 for Push (user-input value)
2 for Pop
3 for Display Stack*/


#include<stdio.h>
#define MAX 10
unsigned int count = 0;
struct stack
{
        int top;
        int arr[MAX];
        void(*fp)(struct stack *s);
};
void initStack(struct stack *s)
{
        s->top=-1;
}
void is_Empty(struct stack *s)
{
        if(s->top==-1)
        {
                printf("Stack is empty\n");
        }
        else
        {
                printf("Stack is not empty\n");
        }
}
void is_Full(struct stack *s)
{
        if(s->top==MAX-1)
        {
                printf("Stack is full\n");
        }
        else
        {
                printf("Stack is not full\n");
        }
}
void push(struct stack *s)
{
        int n;
        printf("Enter value:\n");
        scanf("%d",&n);
        if(count%2==0)
        {
                n<<=2;
                s->arr[++(s->top)]=n;
                printf("Top is:%d\tPushed value is:%d\n",s->top,n);
        }
        else
        {
                n>>=1;
                s->arr[++(s->top)]=n;
                printf("Top is:%d\tPushed value is:%d\n",s->top,n);
        }
        count++;
        printf("%d\n",count);
}
void pop(struct stack *s)
{
        int n;
        n=s->arr[(s->top)--];
        printf("Top is:%d\tPopped value is:%d\n",s->top,n);
        count--;
}
int main()
{
        struct stack s;
        initStack(&s);
        int choice;

        while(1)
        {
                printf("Enter choice:\n1.PUSH\n2.POP\n3.EXIT\n");
                scanf("%d",&choice);
                if(choice==1)
                {
                        s.fp=push;
                        s.fp(&s);
                }
                else if(choice==2)
                {
                        s.fp=pop;
                        s.fp(&s);
                }
                else
                {
                        printf("========EXIT========\n");
                        return 0;
                }

        }

        return 0;
}

