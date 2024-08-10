#if 1
//Question 1: Implement a Stack using Arrays
#include<stdio.h>
#define MAX 3
//Creating a datatype using typrdef named stack
typedef struct
{
	int data[MAX];
	int top;
}stack;
// Creating function to initialize datatype
void initialize(stack *s)
{
	s -> top = -1;
}
//creating function to check waether the stack is empty or not
int isEmpty(stack *s)
{
	return s->top == -1;
}
//Creating function to check weather the stcak is full or not
int isFull(stack *s)
{
	return s->top == MAX-1;
}
//Creating function to push element into stack
void push(stack *s,int value)
{
	if(isFull(s))
	{
		printf("Stack Overflow\n");
		return;
	}

	s->data[++(s->top)] = value;
}
//Creating function to pop element from stack
int pop(stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return;
	}
	return s->data[(s->top)--];
}
//Creating function to check the peek element
int peek(stack*s)
{
	if(isEmpty(s))
	{
		printf("Stack is empty");
	}
	return s->data[(s->top)];
}
//Main function
int main()
{
	stack s;
	initialize(&s);

	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);
	
	printf("Top element of stack : %d\n",peek(&s));
	printf("Element : \n");
	while(!isEmpty(&s))
	{
		printf("%d\n",pop(&s));
	}
	printf("Stack is empty:%s",isEmpty(&s)?  "True":"False");
	return 0;
}




#elif 0
#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct
{
        char data[MAX];
        int top;
}stack;

void initialize(stack *s)
{
        s -> top = -1;
}
int isEmpty(stack *s)
{
        return (s -> top == -1);
}
int isFull(stack *s)
{
        return (s -> top == MAX-1);
}
void push(stack *s,char value)
{
        if(isFull(s))
        {
                printf("Stack Overflow");
                return;
        }
        s -> data[++(s->top)]=value;
}
char pop(stack *s)
{
        if(isEmpty(s))
        {
                printf("Stack Underflow");
                return;
        }
        return s -> data[(s->top)--];
}

#elif 0
//Question 2: Reverse a String using Stack
#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct
{
	char data[MAX];
	int top;
}stack;

void initialize(stack *s)
{
	s -> top = -1;
}
int isEmpty(stack *s)
{
	return (s -> top == -1);
}
int isFull(stack *s)
{
	return (s -> top == MAX-1);
}
void push(stack *s,char value)
{
	if(isFull(s))
	{
		printf("Stack Overflow");
		return;
	}
	s -> data[++(s->top)]=value;
}
char pop(stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return;
	}
	return s -> data[(s->top)--];
}
void reverse_string(char *str)
{
	int n = strlen(str);
	stack s;
	initialize(&s);
	for(int i=0 ; i<n ; i++)
	{
		push(&s,str[i]);
	}
	for(int i=0 ; i<n ; i++)
	{
		str[i]=pop(&s);
	}
}
int main()
{
	char str[MAX];
	printf("Enter a string: \n");
	gets(str);
	reverse_string(str);
	printf("Reversed string:%s \n",str);
	return 0;
}

#elif 0
//Question 3: Check for Balanced Parentheses
#include<stdio.h>
#include<stdbool.h>
#define MAX 100

// Stack structure
typedef struct Stack {
    char data[MAX];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Push a value onto the stack
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack is full!\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// Pop a value from the stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return '\0'; // Return null character if stack is empty
    }
    return s->data[(s->top)--];
}

// Check if two characters are matching pairs
bool isMatchingPair(char char1, char char2) {
    if (char1 == '(' && char2 == ')') return true;
    else if (char1 == '{' && char2 == '}') return true;
    else if (char1 == '[' && char2 == ']') return true;
    return false;
}

// Check if the parentheses in the expression are balanced
bool areParenthesesBalanced(char exp[]) {
    Stack s;
    initialize(&s);

    // Traverse each character in the expression
    for (int i = 0; exp[i] != '\0'; i++) {
        // If it's an opening symbol, push it onto the stack
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&s, exp[i]);
        }
        // If it's a closing symbol
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            // Check if the stack is empty or the pairs don't match
            if (isEmpty(&s) || !isMatchingPair(pop(&s), exp[i])) {
                return false;
            }
        }
    }

    // If the stack is empty, the expression is balanced
    return isEmpty(&s);
}

int main() {
    char exp[MAX];
    printf("Enter an expression: ");
    gets(exp);

    if (areParenthesesBalanced(exp)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}

#elif 0

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Stack structure
typedef struct Stack {
    char data[MAX];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Push a value onto the stack
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack is full!\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// Pop a value from the stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return '\0'; // Return null character if stack is empty
    }
    return s->data[(s->top)--];
}

// Check if two characters are matching pairs
bool isMatchingPair(char char1, char char2) {
    if (char1 == '(' && char2 == ')') return true;
    else if (char1 == '{' && char2 == '}') return true;
    else if (char1 == '[' && char2 == ']') return true;
    return false;
}

// Check if the parentheses in the expression are balanced
bool areParenthesesBalanced(char exp[]) {
    Stack s;
    initialize(&s);

    // Traverse each character in the expression
    for (int i = 0; exp[i] != '\0'; i++) {
        // If it's an opening symbol, push it onto the stack
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&s, exp[i]);
        }
        // If it's a closing symbol
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            // Check if the stack is empty or the pairs don't match
            if (isEmpty(&s) || !isMatchingPair(pop(&s), exp[i])) {
                return false;
            }
        }
    }

    // If the stack is empty, the expression is balanced
    return isEmpty(&s);
}

int main() {
    char exp[MAX];
    printf("Enter an expression: ");
    gets(exp);

    if (areParenthesesBalanced(exp)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}

void initialize(stack *s)
{
	s -> top = -1;
}
int isEmpty(stack *s)
{
	return s->top == -1;
}
int isFull(stack *s)
{
	return s->top==MAX-1;
}
void push(stack *s,char value)
{
	if(isFull(s))
	{
		printf("Stack Overflow");
		return;
	}
	s->data[++(s->top)]=value;
}
char pop(stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return'\0';
	}
	return s->data[(s->top)--];
}
int is_matching(char char1,char char2)
{
	if(char1 == '(' && char2 == ')')
	{
		return true;
	}
	else if(char1 == '{' && char2 == '}')
	{
		return true;
	}
	else if(char1 == '[' && char2 == ']')
	{
		return true;
	}
	else
		return false;
}
int balance(char exp[])
{
	stack s;
	initialize(&s);
	for(int i =0 ; exp[i]!= '\0' ; i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{
			push(&s,exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
		{
			if(isEmpty(&s) || !is_matching(pop(&s),exp[i]))
					{
						return false;
					}
		}
	}
return isEmpty(&s);
}
int main()
{
char exp[MAX];
printf("Enter expression: ");
gets(exp);
if(balance(exp))
{
	printf("Balanced");
}
else
	printf("Not Balanced");

return 0;
}



#elif 0
//Implementing circular queue using array
#include<stdio.h>
#include<stblib.h>
#define MAX 5
typedef struct
{
	int data[MAX];
	int rear;
	int front;
}queue;
void initialize(queue *q)
{
	q->rear = -1;
	q->front = -1;
}
int isEmpty(queue *q)
{
	return q->front == -1;
}
int isFull(queue *q)
{
	return (q->rear+1)%MAX == q->front;
}
int enqueue(queue *q,int value)
{
	if(isFull(q))
	{
		printf("Queue Overflow");
		return;
	}
	return q->data[++(q->rear)]=value;
}
int dequeue(queue *q)
{
	if(isEmpty(q))
	{
		printf("Queue Underflow");
		return;
	}
	int value = q->data[q->front];
	if(q->front == q->rear)
	{
		q->front = -1;
		q->rear = -1;
	}
	else
	{
		q->front = (q->front+1)%MAX;
	}

	return value;
}
int front(queue *q)
{
	if(isEmpty(q))
	{
		printf("Queue is empty");
		return;
	}
	return q->data[q->front];
}
int display(queue *q)
{
	if(isEmpty(q))
	{
		printf("Queue is empty");
		return;
	}
	printf("Elements: \n");
	int i = q->front;
	while(i != (q->rear))
}







#elif 0
#include<stdio.h>
#include<string.h>
#define MAX 10

typedef struct
{
        char data[MAX];
        int top;
}stack;

void initialize(stack *s)
{
        s -> top = -1;
}
int isEmpty(stack *s)
{
        return (s -> top == -1);
}
int isFull(stack *s)
{
        return (s -> top == MAX-1);
}
void push(stack *s,char value)
{
        if(isFull(s))
        {
                printf("Stack Overflow");
                return;
        }
        s -> data[++(s->top)]=value;
}
char pop(stack *s)
{
        if(isEmpty(s))
        {
                printf("Stack Underflow");
                return;
        }
        return s -> data[(s->top)--];
}
int max(stack *s)
{
	int max=0;
	for(int i=0 ; i<MAX-1 ; i++)
	{
		if(i>max)
		{
			pop(&s);
		}
	}
}
int main
{
        stack s;
        initialize(&s);

        push(&s,10);
        push(&s,20);
        push(&s,30);
	push(&s,40);
	push(&s,50);
	push(&s,60);
        return 0;
}



#elif 0
#include<stdio.h>
#define MAX 100
//Creating a datatype using typrdef named stack
typedef struct
{
        int data[MAX];
        int top;
}stack;
// Creating function to initialize datatype
void initialize(stack *s)
{
        s -> top = -1;
}
//creating function to check waether the stack is empty or not
int isEmpty(stack *s)
{
        return s->top == -1;
}
//Creating function to check weather the stcak is full or not
int isFull(stack *s)
{
        return s->top == MAX-1;
}
//Creating function to push element into stack
void push(stack *s,int value)
{
        if(isFull(s))
        {
                printf("Stack Overflow");
		return;
        }
        s->data[++(s->top)] = value;
}
//Creating function to pop element from stack
int pop(stack *s)
{
        if(isEmpty(s))
        {
                printf("Stack Underflow");
		return;
        }
        return s->data[(s->top)--];
}
//Creating function to check the peek element
int peek(stack*s)
{
        if(isEmpty(s))
        {
                printf("Stack is empty");
        }
        return s->data[(s->top)];
}
void reverse_stack(stack*s)
{
//	stack s;
//	initialize(&s);
	while(!isEmpty(s))
	{
		printf("%d\n",pop(s));
	}

}
int main()
{
	stack s;
	initialize(&s);
	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);
	push(&s,50);
	push(&s,60);
	reverse_stack(&s);
	return 0;
}




#elif 0
#include<stdio.h>
#define MAX 100
//Creating a datatype using typrdef named stack
typedef struct
{
        int data[MAX];
        int top;
}stack;
// Creating function to initialize datatype
void initialize(stack *s)
{
        s -> top = -1;
}
//creating function to check waether the stack is empty or not
int isEmpty(stack *s)
{
        return s->top == -1;
}
//Creating function to check weather the stcak is full or not
int isFull(stack *s)
{
        return s->top == MAX-1;
}
//Creating function to push element into stack
void push(stack *s,int value)
{
        if(isFull(s))
        {
                printf("Stack Overflow");
        }
        s->data[++(s->top)] = value;
}
//Creating function to pop element from stack
int pop(stack *s)
{
        if(isEmpty(s))
        {
                printf("Stack Underflow");
        }
        return s->data[(s->top)--];
}
//Creating function to check the peek element
int peek(stack*s)
{
        if(isEmpty(s))
        {
                printf("Stack is empty");
        }
        return s->data[(s->top)];
}
int sort(stack*s)
{
	int arr[MAX];
	for(int i=0 ; i<MAX-1 ; i++)
	{
		arr[i]=pop(s);
	}
	for(int i=0 ; i<MAX-1 ; i++)
	{
		for(int j=i+1 ; j<MAX-1 ; j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[j];
			}
		}
	}
	for(int i=0 ; i<MAX-1 ; i++)
	{
		push(s,arr[i]);
	}
}
int main()
{
	stack s;
	initialize(&s);
	push(&s,60);
	push(&s,40);
	push(&s,30);
	push(&s,10);
	push(&s,50);
	sort(&s);
	return 0;
}
#else
#endif
