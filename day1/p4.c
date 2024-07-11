/* Linked List Operations (Structures & Pointers)

Create a structure to represent a node in a linked list.
Write functions to insert, delete, and search for elements in a linked list (using pointers).
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;

Node* create(int data){
  Node* temp = malloc(sizeof(Node));
  temp->data=data;
  temp->next=NULL;
  return temp;
}

void insert(Node **head,int data){
  Node* temp= create(data);
  if(*head==NULL)*head=temp;
  Node* _idx=*head;
  while(_idx->next!=NULL){
  _idx=_idx->next;
  }
  _idx->next=temp;
}

void delete(Node** start,int key){
    Node*temp=*start;
    Node*p=*start;
    if(temp->data==key){
      *start=temp->next;
      return;
    }
    while(temp->data!=key){
      p=temp;
      temp=temp->next;
    }
    p->next=temp->next;
    return;
}

void printll(Node*start){
  Node *_idx=start;
  while(_idx){
    printf("%d->",_idx->data);
    _idx=_idx->next;
  }
}

int main(){
  Node *start=create(5);
  insert(&start,6);
  insert(&start,7);
  insert(&start,8);
  insert(&start,9);
  insert(&start,10);
  delete(&start,8);
  printll(start);
  return 0;
  } 
