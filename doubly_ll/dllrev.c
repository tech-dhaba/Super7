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
		printf("Error in memory allocation");
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
void reverse(Node** head)
{
	Node* temp=NULL;
	Node* current=*head;
	while(current!=NULL)
	{
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;

		current=current->prev;
	}
	if(temp!=NULL)
	{
		*head=temp->prev;
	}
}
int main()
{
	Node* head=NULL;
	int i,data;
	printf("Enter elements for the linked list:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&data);
		insertatbeg(&head,data);
	}
	printf("Linked list is:\n");
	printlist(head);
	printf("Reverse linked list is:\n");
	reverse(&head);
	printlist(head);
	return 0;
}
