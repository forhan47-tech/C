#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, power = 0;

    // Get user input
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary != 0) {
        int lastDigit = binary % 10;  // Extract last digit
        decimal += lastDigit * pow(2, power);  // Multiply by power of 2
        binary /= 10;  // Remove last digit
        power++;  // Increase power
    }

    // Display result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

