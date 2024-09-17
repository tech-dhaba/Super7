//Implement a singly linked list where each node contains an integer value and a pointer to the next node.
//Write functions to insert, delete, and search for elements in the linked list.
//Implement a function to reverse the linked list.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;
Node* create(int data)
{
	Node* Newnode=(Node*)malloc(sizeof(Node*));
	if(!Newnode)
	{
		printf("Error in memory allocation\n");
		return NULL;
	}
	Newnode->data=data;
	Newnode->next=NULL;
	return Newnode;
}
void insertatbeg(Node** head,int data)
{
	Node* Newnode=create(data);
	if(!Newnode)
	{
		return NULL;
	}
	Newnode->next=*head;
	*head=Newnode;
}
void insertatend(Node** head,int data)
{
	Node* Newnode=create(data);
	if(!Newnode)
	{
		return NULL;
	}
	if(*head==NULL)
	{
		*head=Newnode;
		return;
	}
	Node* temp=*head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=Newnode;
}
void delete(Node** head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
		return NULL;
	}
	Node* temp;
}
void print(Node * head) {
    Node* temp = head;
    while(temp->next!=NULL)
    {
	    printf("%d->",temp->data);
	    temp=temp->next;
    }
    printf("NULL\n");
}
int main() {
    Node* head = NULL;

    // Insert nodes at the beginning
    insertatbeg(&head, 10);
    insertatbeg(&head, 15);
    print(head);

    // Insert nodes at the end
    insertatend(&head, 20);
    print(head);

    // Delete a node from the beginning
    delete(&head);
    print(head);

    return 0;
}
