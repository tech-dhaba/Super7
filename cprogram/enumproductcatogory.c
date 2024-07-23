#include <stdio.h>

typedef enum {
    ELECTRONICS,
    APPAREL,
    GROCERIES,
    CATEGORY_COUNT 
} ProductCategory;

const double taxRates[CATEGORY_COUNT] = {0.1, 0.05, 0.02};

int main() {
    ProductCategory category;
    double basePrice, totalPrice, taxAmount, discountPercent;
    int quantity;
    printf("Enter product category (0 for ELECTRONICS, 1 for APPAREL, 2 for GROCERIES): ");
    scanf("%d", (int *)&category);
    printf("Enter base price: ");
    scanf("%lf", &basePrice);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    if(category >2)
    goto error;
    if (basePrice <= 0 || quantity <= 0) {
        printf("Error: Base price or quantity should be greater than zero.\n");
        goto error;
    }
    taxAmount = basePrice * taxRates[category];
    totalPrice = basePrice * quantity + taxAmount;
    switch (category) {
        case ELECTRONICS:
            if (totalPrice > 1000) {
                discountPercent = 0.1; 
            } else {
                discountPercent = 0;
            }
            break;
        case APPAREL:
            discountPercent = 0.05; 
            break;
        case GROCERIES:
            discountPercent = 0.02; 
            break;
        default:
            discountPercent = 0;
            break;
    }
    totalPrice -= totalPrice * discountPercent;
    printf("Final price after applying tax and discount: %.2f\n", totalPrice);
    return 0;
    error:
    printf("Exiting due to error.\n");
    return 1;
}

