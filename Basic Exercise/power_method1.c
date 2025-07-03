#include <stdio.h>

int main() {
    int base, exponent, result = 1;

    // Get user input
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Compute power manually using loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Display result
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

