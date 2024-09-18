#include<stdio.h>

#define capacity 8

typedef struct{
  int front,rear,queue[capacity];
}Queue;

int isFull(Queue *_q){
  return _q->front==(_q->rear+1)%capacity;
}

int isEmpty(Queue *_q){
  return _q->front==-1;
}

void Enqueue(Queue* _q,int data){
  if(isFull(_q))return;
  if(isEmpty(_q))_q->front++;
  _q->rear=(_q->rear+1)%capacity;
  _q->queue[_q->rear]=data;
}

void Dequeue(Queue* _q){
  if(isEmpty(_q))return;
  if(_q->front==_q->rear){
    _q->front=-1;
    _q->rear=-1;
  }else
    _q->front=(_q->front+1)%capacity;
}

void print(Queue* _q){
  int i=_q->front;
  while(1){
    if(i==_q->rear)break;
    printf("%d ",_q->queue[i]);
    i=(i+1)%capacity;
  }
  printf("\n");
}


int main(void){
  Queue q={-1,-1,{0}};
  printf("front-- %d rear-- %d\n",q.front,q.rear);
  Enqueue(&q,20);
  Enqueue(&q,26);
  Enqueue(&q,38);
  Enqueue(&q,19);
  Enqueue(&q,54);
  Enqueue(&q,91);
  Enqueue(&q,37);
  Enqueue(&q,17);
  printf("front-- %d rear-- %d\n",q.front,q.rear);
  print(&q);
  Dequeue(&q);
  print(&q);
  printf("front-- %d rear-- %d\n",q.front,q.rear);
  int temp=q.front;
  q.front=q.rear;
  q.rear=temp;
  printf("front-- %d rear-- %d\n",q.front,q.rear);
  print(&q);
}
