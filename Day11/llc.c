#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void list(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    }
    else {
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
int length(Node* head) {
    if (head == NULL) return 0;
    int count = 0;
    Node* temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}
void printList(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}
int main() {
    Node* head = NULL;
    list(&head, 1);
    list(&head, 2);
    list(&head, 3);
    list(&head, 4);
    printf("Circular Linked List: ");
    printList(head);
    printf("Length of Circular Linked List: %d\n", length(head));
    return 0;
}

