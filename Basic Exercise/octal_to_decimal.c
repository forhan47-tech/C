#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, power = 0;

    // Get user input
    printf("Enter a binary number: ");
    scanf("%d", &octal);

    // Convert binary to decimal
    while (octal != 0) {
        int lastDigit = octal % 10;  // Extract last digit
        decimal += lastDigit * pow(8, power);  // Multiply by power of 2
        octal /= 10;  // Remove last digit
        power++;  // Increase power
    }

    // Display result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
