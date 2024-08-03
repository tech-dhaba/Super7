#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 5
struct Stack {
	int Top;
	int arr[MAX];
};
bool isEmpty(struct Stack *st) {
	return(st->Top == -1);
}
bool isFull(struct Stack *st) {
	return(st->Top == MAX-1);
}
int pop(struct Stack *st)
{
	printf("pop top is %d\n", st->Top);
	if(isEmpty(st)) return -1;
	return (st->arr[st->Top--]);
}
void push(struct Stack *st, int data) {
	if(isFull(st)) return -1;
	st->arr[++st->Top]=data;
	printf("push top is %d\t data is %d\n",st->Top,data);
}
int main() {
	struct Stack St;
	memset(&St.arr,0,(MAX));
	St.Top = -1;
	push(&St,10);
	push(&St,2);
	push(&St,3);
	while(!(isEmpty(&St)))
	{
		printf("data is %d\n",pop(&St));
	}
	return 0;
}

