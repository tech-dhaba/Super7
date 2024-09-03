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
		printf("Error in memeory allocation\n");
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
		return NULL;
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
Node* merge(Node* head1,Node* head2)
{
	if(head1==NULL)
	{
		return head2;
	}
	if(head2==NULL)
	{
		return head1;
	}
	Node* mergelist=NULL;
	Node* tail=NULL;
	while(head1!=NULL && head2!=NULL)
	{
		Node* nextnode;
		if(head1->data<=head2->data)
		{
			nextnode=head1;
			head1=head1->next;
		}
		else
		{
			nextnode=head2;
			head2=head2->next;
		}
		if(mergelist==NULL)
		{
			mergelist=nextnode;
			tail=mergelist;
		}
		else
		{
			tail->next=nextnode;
			nextnode->prev=tail;
			tail=tail->next;
		}
	}
	if(head1!=NULL)
	{
		tail->next=head1;
		head1->prev=tail;
	}
	else if(head2!=NULL)
	{
		tail->next=head2;
		head2->next=tail;
	}
	return mergelist;
}
int main()
{
	Node* head1=NULL;
	Node* head2=NULL;
	Node* mergenode=NULL;
	int i,n,m,data1,data2;
	printf("Enter the size of list1 and list2:\n");
	scanf("%d%d",&n,&m);
	printf("Enter elements of list1:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data1);
		insert(&head1,data1);
	}
	printf("List1 is:\n");
	print(head1);
	printf("Enter elements of list2:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&data2);
		insert(&head2,data2);
	}
	printf("List2 is:\n");
	print(head2);
	printf("Merged and sorted list is:\n");
	mergenode=merge(head1,head2);
	print(mergenode);
	return 0;
}
