//linked list using malloc
#include<stdio.h>
#include<stdlib.h>
//Define the node structure
struct Node
{
	int data;
	struct Node* next;
};
//Create a new node
struct Node*create(int data)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	if(!newnode)
	{
		printf("Error in memory allocation");
		return NULL;
	}
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
//to insert at the beginning
void insertatbegin(struct Node** head,int data)
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
void insertatend(struct Node** head,int data)
{
	struct Node* newnode=create(data);
	if(!newnode)
	{
		return;
	}
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}
	struct Node* temp=*head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
//function to delete with a specific key
void deletenode(struct Node** head,int key)
{
	struct Node* temp=*head;
	struct Node* prev=NULL;
	if(temp!=NULL && temp->data==key)
	{
		*head=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		return;
	}
	prev->next=temp->next;
	free(temp);
}
//function to search values with a specific key
struct Node* search(struct Node* head,int key)
{
	struct Node* current=head;
	while(current!=NULL)
	{
		if(current->data==key)
		{
			return current;
		}
		current=current->next;
	}
	return NULL;
}
//Printing the values of linked list
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
//function to free the memory allocated to linked list dynamically
void freelist(struct Node** head)
{
	struct Node* current=*head;
	struct Node* next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		free(current);
		current=next;
	}
	*head=NULL;
}
int main()
{
	struct Node* head=NULL;
	insertatend(&head,15);
	insertatend(&head,20);
	insertatend(&head,25);
	insertatend(&head,30);
	insertatbegin(&head,10);
	insertatbegin(&head,5);
	printf("Linked List:\n");
	printlist(head);
	printf("Deleting node with data 20\n");
	deletenode(&head,20);
	printlist(head);
	//struct Node* foundNode = searchNode(head, 30);
	//if(foundNode)
	//{
	//	printf("
	//}
	return 0;

}
