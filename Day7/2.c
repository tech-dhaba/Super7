#include <stdio.h>
int main() {
    int stack[5] = {1, 2, 3, 4, 5};
    int Max = 5;
    int top = sizeof(stack)/sizeof(int); 
    if (top == Max) {
        printf("Stack is full and top is: %d\n",top);
	top -= 1;
	printf("Now the new top is: %d\n",top);
    } else {
        printf("Stack is not full and top is: %d\n",top);
	top += 1;
	printf("Now the new top is:  %d\n",top);
    }
    return 0;
}



