//Circular Queue Implementation
//Description: Implement a circular queue using an array. Your circular queue should support the following operations:

//enqueue(int x): Adds an element to the rear of the queue.
//dequeue(): Removes the front element of the queue.
//front(): Returns the front element of the queue.
//isEmpty(): Checks if the queue is empty.
//isFull(): Checks if the queue is full.
#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct
{
	int item[max];
	int front;
	int rear;
}Queue;
void initializeQ(Queue *q)
{
	q->front=-1;
	q->rear=-1;
}
int isfull(Queue *q)
{
	return((q->rear+1%max)=q->front);
}
int isempty(Queue *q)
{
	return (q->front==-1 && q->rear==-1);
}
void enqueue(Queue *q)
{
	int value;
	printf("enter value:\n");
	scanf("%d",&value);
	if(isempty(q))
	{
		q->front=0;
		q->rear=0;
	}
	else if(isfull)
	{
		printf("queue is full\n");
	}
	else
	{
		q->rear=q->(rear+1);
		q->item[q->rear]=value;
		printf("Inserted value is:%d\n",&q);
	}
}
void dequeue(Queue *q)
{
	int item;
	if(isempty(q))
	{
		printf("Queue is empty\n");
	}
	else
	{
		item=q->item[q->front];
		if(q->front==q->rear)
		{
			q->front=-1;
			q->rear=-1;
		}
		else
		{
			q->front=q->(front+1);
		}
	}
}
int front(Queue *q)
{
	if(isempty(q))
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Front element is:%d\n",q->item[q->front]);
	}
}
void display(Queue *q)
{
    int i;
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("\n======Printing Values=======\n");
    for (i = front; i != rear; i = (i + 1) % max) {
        printf("%d\n", q[i]);
    }
    printf("%d\n", q[i]); // Print the last element

    if ((rear + 1) % max == front) {
        printf("Queue is full\n");
    } else {
        printf("Queue has space left\n");
    }
}
int main()
{
	int choice;
	Queue q;
	while(choice !=5)
	{
		printf("==================Choices are===================\n1.enqueue\n2.dequeue\n3.display\n4.front\n5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue(&q);
				break;
			case 2:
				dequeue(&q);
				break;
			case 3:
				display(&q);
				break;
			case 4:
				front(&q);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Enter a valid choice\n");
		}
	}
}
