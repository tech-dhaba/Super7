#include<stdio.h>
#include<stdlib.h>
//Creating structure for linked list
struct Node
{
    int data;
    struct Node* next;
};
//creating structure to create a newnode via allocating new memory
struct Node* create(int data)
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
struct Node* insert(struct Node** head,int data)
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
void search(struct Node* head,int num)
{
    struct Node* temp=head;
    int found=0;
    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            printf("No. is present\n");
            found=1;
        }
        temp=temp->next;
    }
    if(found!=1)
    {
        printf("No. is not present\n");
    }
}
void reverse(struct Node** head)
{
    struct Node* prev=NULL;
    struct Node* current=*head;
    struct Node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
int main()
{
    struct Node* head=NULL;
    int i,num,data;
    printf("Enter no. to be found in the linked list:\n");
    scanf("%d",&num);
    printf("Enter elements for the linked list:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&data);
        insert(&head,data);
    }
    printf("Linked list is:\n");
    printlist(head);
    search(head,num);
    printf("Reverse linked list is:\n");
    reverse(&head);
    printlist(head);
    return 0;
}
