//FUNCTION POINTER
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int main()
{
	int a,b;
	printf("Enter value for a and b:\n");
	scanf("%d %d",&a,&b);
	int (*fp)(int,int)=add;
	printf("Sum is:%d\n",fp(a,b));
	return 0;
}/*
#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    int (*swap_ptr)(int *,int *)=&swap;
    swap_ptr(&x,&y);
    printf("%d%d\n",x,y);
    return 0;
}
#include <stdio.h>

// Function prototypes
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int div(int x, int y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Division not possible\n");
        return 0; // Return 0 or an appropriate error value
    }
}

int main() {
    // Declare and initialize an array of function pointers
    int (*cal[4])(int, int) = {add, sub, mul, div};

    int x, y, n;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &x, &y);
    printf("Enter 1 for add, 2 for sub, 3 for mul, 4 for div:\n");
    scanf("%d", &n);

    // Check for valid operation
    if (n >= 1 && n <= 4) {
        // Call the appropriate function using the function pointer array
        int result = cal[n-1](x, y);
        // Print the appropriate result based on the operation
        switch (n) {
            case 1:
                printf("Addition is: %d\n", result);
                break;
            case 2:
                printf("Subtraction is: %d\n", result);
                break;
            case 3:
                printf("Multiplication is: %d\n", result);
                break;
            case 4:
                printf("Division is: %d\n", result);
                break;
        }
    } else {
        printf("INVALID CASE\n");
    }

    return 0;
}*/

