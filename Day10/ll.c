#include<stdio.h>
#include <stdlib.h>
typedef struct st {
    int data;
    struct st* next;
} st;
st* createNode(int data) {
    st* newNode = (st*)malloc(sizeof(st)); 
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode;
}
void printList(st* head) {
    st* current = head; 
    while (current != NULL) { 
        printf("%d -> ", current->data); 
        current = current->next; 
    }
    printf("NULL\n"); 
}
int main() {
    st* head = createNode(1);
    st* second = createNode(2);
    st* third = createNode(3);
    head->next = second;
    second->next = third;
    printList(head);
} 


