#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to validate card number (simple length check)
bool validateCardNumber(const char* cardNumber) {
    int len = strlen(cardNumber);
    return (len == 16); // Basic check for 16-digit card number
}

// Function to validate CVV (simple length check)
bool validateCVV(const char* cvv) {
    int len = strlen(cvv);
    return (len == 3); // Basic check for 3-digit CVV
}

int main() {
    char cardNumber[20];
    char cvv[5];
    float amount;

    printf("=== Payment Processing System ===\n");

    // Get payment amount
    printf("Enter payment amount: $");
    scanf("%f", &amount);

    // Get card number
    printf("Enter 16-digit card number: ");
    scanf("%s", cardNumber);

    // Validate card number
    if (!validateCardNumber(cardNumber)) {
        printf("Invalid card number. Transaction failed.\n");
        return 1;
    }

    // Get CVV
    printf("Enter 3-digit CVV: ");
    scanf("%s", cvv);

    // Validate CVV
    if (!validateCVV(cvv)) {
        printf("Invalid CVV. Transaction failed.\n");
        return 1;
    }

    // Simulate payment processing
    printf("Processing payment of $%.2f...\n", amount);

    // Simulate delay (optional)
    // sleep(2);

    printf("Payment successful! Thank you for your purchase.\n");

    return 0;
}
