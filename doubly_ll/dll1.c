#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
}Node;
Node* create(int data)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	if(!newnode)
	{
		printf("Error in allocating memory\n");
		return NULL;
	}
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void insertatbeg(Node** head,int data)
{
	Node* newnode=create(data);
	if(!newnode)
	{
		return;
	}
	newnode->next=*head;
	if(*head!=NULL)
	{
		(*head)->prev=newnode;
	}
	*head=newnode;
}
void insertatend(Node** head,int data)
{
	Node* newnode=create(data);
	if(!newnode)
	{
		return;
	}
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}
	Node* temp=*head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}
void insertatpos(Node** head,int data,int pos)
{
	if(pos<1)
	{
		printf("INVALID POSITION\n");
		return;
	}
	if(pos==1)
	{
		insertatbeg(head,data);
		return;
	}
	Node* newnode=create(data);
	if(!newnode)
	{
		return;
	}
	Node *temp=*head;
	for(int i=0;i<pos-1 && temp!=NULL;i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("Position is out of range\n");
		free(newnode);
		return;
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	if(temp->next!=NULL)
	{
		temp->next->prev=newnode;
	}
	temp->next=newnode;
}
void delatbeg(Node** head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	Node* temp=*head;
	*head=(*head)->next;
	if(*head!=NULL)
	{
		(*head)->prev=NULL;
	}
	free(temp);
}
void delatend(Node** head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	Node* temp=*head;
	if(temp->next==NULL)
	{
		*head=NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->prev->next=NULL;
	}
	free(temp);
}
void delatpos(Node** head,int pos)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	if(pos<1)
	{
		printf("Invalid Position");
		return;
	}
	Node* temp=*head;
	if(pos==1)
	{
		(*head)=(*head)->next;
		if(*head!=NULL)
		{
			(*head)->prev=NULL;
		}
		free(temp);
		return;
	}
	for(int i=0;i<pos && temp!=NULL;i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("Position out of range\n");
		return;
	}
	if(temp->next!=NULL)
	{
		temp->next->prev=temp->prev;
	}
	if(temp->prev!=NULL)
	{
		temp->prev->next=temp->next;
	}
}
void printlist(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	Node* head=NULL;
	insertatbeg(&head,10);
	insertatbeg(&head,15);
	printlist(head);
	insertatend(&head,20);
	printlist(head);
	insertatpos(&head,40,2);
	printlist(head);
	delatbeg(&head);
	printlist(head);
	delatend(&head);
	printlist(head);
	delatpos(&head,1);
	printlist(head);
	return 0;
}
