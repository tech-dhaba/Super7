#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert() {
    int item;
    if ((rear + 1) % MAX == front) {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the value to be inserted:\n");
    scanf("%d", &item);

    if (front == -1) front = 0; // Initialize front to 0 when inserting the first element
    rear = (rear + 1) % MAX;
    queue[rear] = item;
}

void delete() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    if (front == rear) {
        // Queue has become empty
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("\n======Printing Values=======\n");
    for (i = front; i != rear; i = (i + 1) % MAX) {
        printf("%d\n", queue[i]);
    }
    printf("%d\n", queue[i]); // Print the last element

    if ((rear + 1) % MAX == front) {
        printf("Queue is full\n");
    } else {
        printf("Queue has space left\n");
    }
}

int main() {
    int choice = 0;
    while (choice != 4) {
        printf("Choices are\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n==========================Enter valid choice=======================\n");
        }
    }
    return 0;
}

