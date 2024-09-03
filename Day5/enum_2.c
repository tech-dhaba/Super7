#include <stdio.h>

// Define an enum for product categories
typedef enum {
    ELECTRONICS,
    APPAREL,
    GROCERIES
} ProductCategory;

// Function to calculate tax amount based on category and base price
float calculateTax(ProductCategory category, float basePrice) {
    switch (category) {
        case ELECTRONICS:
            return 0.1 * basePrice;  // 10% tax for electronics
        case APPAREL:
            return 0.05 * basePrice; // 5% tax for apparel
        case GROCERIES:
            return 0.0;              // Groceries are tax-free
        default:
            return 0.0;
    }
}

// Function to determine discount percentage based on category and total price
float calculateDiscount(ProductCategory category, float totalPrice) {
    switch (category) {
        case ELECTRONICS:
            if (totalPrice >= 500.0)
                return 0.1;  // 10% discount if total price >= 500 for electronics
            else
                return 0.0;
        case APPAREL:
            if (totalPrice >= 200.0)
                return 0.05; // 5% discount if total price >= 200 for apparel
            else
                return 0.0;
        case GROCERIES:
            return 0.0;      // No discount for groceries
        default:
            return 0.0;
    }
}

int main() {
error:
	printf("INVALID CASE\n");
    ProductCategory category;
    float basePrice, discountPercent, taxAmount, totalPrice, finalPrice;
    int quantity;

    // Input product category, base price, and quantity
    printf("Enter product category (0 for ELECTRONICS, 1 for APPAREL, 2 for GROCERIES): ");
    int categoryInput;
    scanf("%d", &categoryInput);
    if(categoryInput<0||categoryInput>2)
    {
	    goto error;
    }

    // Validate category input
    if (categoryInput < 0 || categoryInput > 2) {
        goto error;
    }
    category = (ProductCategory)categoryInput;

    printf("Enter base price of the product: ");
    scanf("%f", &basePrice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Calculate total price before tax
    float subtotal = basePrice * quantity;

    // Calculate tax amount
    taxAmount = calculateTax(category, subtotal);

    // Calculate total price before discount
    totalPrice = subtotal + taxAmount;

    // Calculate discount percentage
    discountPercent = calculateDiscount(category, totalPrice);

    // Calculate final price after applying discount
    finalPrice = totalPrice * (1.0 - discountPercent);

    // Display results
    printf("\n===== RECEIPT =====\n");
    printf("Category: %d\n", category);
    printf("Base Price: %.2f\n", basePrice);
    printf("Quantity: %d\n", quantity);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax Amount: %.2f\n", taxAmount);
    printf("Discount Applied: %.2f%%\n", discountPercent * 100);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
