#include<stdio.h>
#include<stdlib.h>

#define max 3
typedef struct node{
 int data;
 struct node * next;
}node;
 
int main(){
node list[max],*temp;
for(int i =0;i<max;i++){
  list[i].data=i+1;
  if(i<max-1){
   list[i].next=&list[i+1];
}
 else  list[max-1].next=NULL;
}
temp=&list[0];
while(temp->next!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
}
