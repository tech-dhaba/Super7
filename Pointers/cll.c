#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the circular linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) return;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;  // Point to itself, circular link
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }
}

// Function to insert a node at the end of the circular linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) return;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;  // Point to itself, circular link
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

// Function to delete a node with a specific key
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) return;

    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the node to be deleted is the head node
    if (temp->data == key) {
        if (temp->next == *head) {
            *head = NULL;
            free(temp);
            return;
        }
        struct Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        *head = temp->next;
        last->next = *head;
        free(temp);
        return;
    }

    // Traverse the list to find the node to delete
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != *head && temp->data != key);

    if (temp == *head) {
        printf("Node with data %d not found\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to search for a node with a specific key
struct Node* searchNode(struct Node* head, int key) {
    if (head == NULL) return NULL;

    struct Node* temp = head;
    do {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    } while (temp != head);

    return NULL;
}

// Function to print the circular linked list
void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Function to free the circular linked list
void freeList(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;
    struct Node* next = NULL;

    do {
        next = temp->next;
        free(temp);
        temp = next;
    } while (temp != *head);

    *head = NULL;
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtBeginning(&head, 5);

    printf("Circular Linked List: ");
    printList(head);

    printf("Deleting node with data 20\n");
    deleteNode(&head, 20);
    printList(head);

    struct Node* foundNode = searchNode(head, 30);
    if (foundNode) {
        printf("Node with data %d found\n", foundNode->data);
    } else {
        printf("Node not found\n");
    }

    freeList(&head);
    return 0;
}

