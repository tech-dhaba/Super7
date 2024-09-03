#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 9
typedef struct {
  int front;
  int rear;
  int capacity;
  int data[CAPACITY];
}Queue;
bool isfull(Queue *q){
  if(q->rear == q->front){ return true;}
   else  return false;
}
bool isempty(Queue *q){
    int c=0;
     for(int i=0;i<CAPACITY;i++){
            if (q->data[i]==0){ 
              c++;
           }
            if(c==CAPACITY){                             
             printf("empty Queue\n");
             return true;}
           else false;
     }
    printf("Queue is not empty\n");
}
void enqueue(Queue *q,int a){
       if(isfull(q)) { printf("Over ride %d\n",a); return ;}
       else{
       if(q->rear ==(CAPACITY)){
       q->rear=0;}
       q->data[q->rear]= a;
       q->rear=q->rear + 1;
     }
}
void dequeue(Queue *q){
      q->data[q->front]= 0;
      if(q->front ==0) { q->front =q->front+1;}
      else { q->front = CAPACITY-1;}
}
void printQueue(Queue *q){
      for(int i=0;i<CAPACITY;i++){
       if(q->data[i]==0) { printf("  ");continue;}
       printf("%d ",q->data[i]);
     }
   printf("\n");
}
int main(){
    Queue q={0,3,5,{1,2,3}};
      enqueue(&q,5);   
      printQueue(&q);
      enqueue(&q,7);
      printQueue(&q);
      dequeue(&q);
      printQueue(&q);
      enqueue(&q,9);
      printQueue(&q);
      enqueue(&q,10);
      printQueue(&q);
      enqueue(&q,11);
      printQueue(&q);
      enqueue(&q,12);
      printQueue(&q);
      enqueue(&q,13);
      printQueue(&q);
    if(isfull(&q))  printf("QUEUE is full\n");
    else {
      printf("QUEUE is not full\n");
 }
}
