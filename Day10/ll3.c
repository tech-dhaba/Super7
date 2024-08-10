#include<stdio.h>
#include<stdlib.h>

#define MAX 3

typedef struct ll{
	int data;
	struct ll *next;
} Node;

int main() {
	Node LL_arr[MAX],*tmp_ll_ptr;

	for(int i=0; i<MAX; i++){
		LL_arr[i].data = i+1;
		if (i <MAX-1) {
			LL_arr[i].next= &LL_arr[i+1];
		}
		else {
			LL_arr[MAX-1].next = NULL;
		}
	}
	tmp_ll_ptr = &LL_arr[0];
	while(tmp_ll_ptr != NULL) {
		printf("data is %d\n",tmp_ll_ptr->data);
		tmp_ll_ptr = tmp_ll_ptr->next;
	}
}

