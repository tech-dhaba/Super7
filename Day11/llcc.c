#include<stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
}Node;
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode;
}
void insertAtBegin(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
void printList(struct Node* head) {
    struct Node* current = head; 
    while (current != NULL) { 
        printf("%d\t ", current->data); 
        current = current->next; 
    }
    printf("NULL\n"); 
}
int main() {
   struct Node* head = createNode(1);
   struct Node* next = NULL;
    insertAtBegin(&head,5);
    insertAtBegin(&head,15);
    insertAtBegin(&head,25);
    insertAtBegin(&head,35);

   insertAtEnd(&head,5);
   insertAtEnd(&head,10);
	
    printList(head);
}
