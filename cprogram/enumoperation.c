#include <stdio.h>
typedef enum {
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    OPERATION_COUNT 
} Operation;
int main() {
    Operation op;
    double num1, num2, result;
    int isValidOperation = 0; 
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Select operation (0 for addition, 1 for subtraction, 2 for multiplication, 3 for division): ");
    scanf("%d", (int *)&op);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (op) {
        case ADDITION:
            result = num1 + num2;
            isValidOperation = 1;
            break;
        case SUBTRACTION:
            result = num1 - num2;
            isValidOperation = 1;
            break;
        case MULTIPLICATION:
            result = num1 * num2;
            isValidOperation = 1;
            break;
        case DIVISION:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                goto error;
            } else {
                result = num1 / num2;
                isValidOperation = 1;
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            goto error;
    }
    if (isValidOperation) {
        printf("Result: %.2f\n", result);
    }
    return 0;
    error:
    printf("Exiting due to error.\n");
    return 1;
}

