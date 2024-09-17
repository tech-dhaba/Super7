//Implement a singly linked list where each node contains an integer value and a pointer to the next node.
//Write functions to insert, delete, and search for elements in the linked list.
//Implement a function to reverse the linked list.
#include<stdio.h>
  2 #include<stdlib.h>
  3 typedef struct node
{
         int data;
         struct node *  next;
} node;

node* create(int data)
{
         node* temp = malloc(sizeof(node));
         temp-> data = data;
         temp-> next = NULL;
         return temp;
}
void insert(node **start,int data)
{
         node * temp = *start;
         while (temp&&temp->next)
         temp=temp->next;
         temp->next=create(data);

}
void print(node *start)
{
         node *temp= start;
         while(temp)
       {
                 printf("%d->",temp->data);temp = temp->next;
       }
}
void delete(node *start,int info)
{
         node *temp = start; node *p ;
         while(temp->data!=info)
         {
                 p =temp;
                 temp=temp->next;
         }
          p->next=temp->next;

}
 node* reverse_list(node* head) {
     if (head == NULL || head->next == NULL) {
         return head;
     }
     node* new_head = reverse_list(head->next);
     head->next->next = head;
     head->next = NULL;
     return new_head;
}
int main()
{
         node *top=create(4);
         insert(&top,5);
         insert(&top,6);
         insert(&top,7);
         insert(&top,8);
         insert(&top,8);
         insert(&top,9);
         insert(&top,10);
         insert(&top,12);
         insert(&top,25);
         delete(top,25);
         print(top);
         printf("\n");
         node *top1=reverse_list(top);
         print(top1);
         printf("\n");
         return 0;
}                                          
