#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
  int data;
 struct Node* next;
 struct Node* prev;
}Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev= NULL;
    return newNode;
}
void insertAtBeginning(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}
int main() {
    Node* node1 = createNode(10);
    Node* node2 = createNode(20);
    Node* node3 = createNode(30);
    node1->next = node2; 
    node2->prev = node1;
    node2->next = node3; 
    node3->prev = node2;  
    Node* current = node1;
    while (current != NULL) {
        printf("Node data: %d\n", current->data);
        current = current->next;
    }
    free(node1);
    free(node2);
    free(node3);
    return 0;
}

