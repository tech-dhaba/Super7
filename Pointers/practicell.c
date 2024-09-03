#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* create(int data)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	if(!newnode)
	{
		printf("Error in allocating the memory");
		return NULL;
	}
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void insertatbeg(struct Node** head,int data)
{
	struct Node* newnode=create(data);
	if(!newnode)
	{
		return;
	}
	newnode->next=*head;
	*head=newnode;
	return;
}
void printlist(struct Node* head)
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	struct Node* head=NULL;
	insertatbeg(&head,10);
	insertatbeg(&head,20);
	insertatbeg(&head,30);
	insertatbeg(&head,40);
	printf("Linked list is:\n");
	printlist(head);
	return 0;
}
