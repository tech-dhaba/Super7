#include<stdio.h>

typedef struct st {
	int data;
	struct st *next;
} Node;

int main() {
	Node ll[3];

	ll[0].data = 1;
        ll[0].next = &ll[1];

	ll[1].data = 2;
 	ll[1].next =&ll[2];

	ll[2].data = 3;
	ll[2].next = NULL;
    }

	void printll(Node *head) {
	Node *current = head;
	while(current != NULL){
  	printf("%d -> ", current->data);
        current = current->next;
	}
	}
