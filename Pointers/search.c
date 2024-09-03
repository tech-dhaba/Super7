//SEARCH IN LINKED LIST
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
		printf("Error in memory aallocation");
		return NULL;
	}
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void insert(struct Node** head,int data)
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
void search(struct Node* head,int n)
{
	struct Node* temp=head;
	int found;
	while(temp!=NULL)
	{
		if(temp->data==n)
		{
			printf("No. is present\n");
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found!=1)
	{
		printf("No. is not present\n");
	}
}
int main()
{
	struct Node* head=NULL;
	int i,n,data;
	printf("Enter no. to be searched:\n");
	scanf("%d",&n);
	printf("Enter values to be inserted:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&data);
		insert(&head,data);
	}
	printf("Linked list is:\n");
	printlist(head);
	search(head,n);
	return 0;
}
