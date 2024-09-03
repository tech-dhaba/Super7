#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 7
typedef struct{
int front;
int rear;
int capacity;
int data[CAPACITY];
}Queue;
bool isfull(Queue *q){
      if(q->rear==q->front) return true;
      else return false;
}

bool isempty(Queue *q){
   int c=0;
     for(int i=0;i<CAPACITY;i++){
            if (q->data[i]!=0){
           c=c+1;
            }
            if(c==CAPACITY){
             printf("empty Queue\n");
             return true;}
        else  return false;
     }
   printf("Queue is not empty\n");
 }
void reverse(Queue *q){
 if(isempty(q)) { printf("Empty Queue"); return; } 
 if(isfull(q)){
  for(int i =0;i<CAPACITY;i++){
       int c= q->data[i];
       q->data[i]=q->data[CAPACITY-i-1];
       q->data[CAPACITY-i-1]=c;
}
}
  else
    {
     if(q->front <q->rear){
     for(int i =q->front;i<(q->front+q->rear)/2;i++){
       int a= q->data[i];
       q->data[i]=q->data[q->rear];
       q->data[q->rear]=a;
       q->rear--;
}}
     else{
     while(q->front ==q->rear||  q->rear-1== q->front ){
        if(q->rear==0)  q->rear==CAPACITY;
       int a1= q->data[q->rear-1];
       q->data[q->rear-1]=q->data[q->front];
       q->data[q->front]=a1;
       q->rear-=1;
       q->front+=1;
	}}
}
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
Queue q={1,3,5,{1,4,5}};
reverse(&q);
printQueue(&q);
}
