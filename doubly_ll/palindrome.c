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
		printf("Error in memory allocation\n");
		return NULL;
	}
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void insert(Node** head,int data)
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
void print(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void palindrome(Node** head)
{
	if(*head==NULL || (*head)->next==NULL)
	{
		printf("List is either empty or has single element => that the list is palindrome\n");
	}
	Node* temp=*head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	int i=0;
	while(*head!=temp && (*head)->prev!=temp)
	{
		if((*head)->data != temp->data)
		{
		//	printf("List is not a palindrome\n");
			i=1;
		}
		*head=(*head)->next;
		temp=temp->prev;
	}
	if(i==1)
	{
		printf("List is not a palindrome\n");
	}
	else
	{
		printf("List is a palindrome\n");
	}
}
int main() {
    Node* head = NULL;
    int n, i, data;

    printf("Enter the number of elements in the list:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(&head, data);
    }

    print(head);

    palindrome(&head);

    return 0;
}
