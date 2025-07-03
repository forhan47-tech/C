#include <stdio.h>

int main() {
    int decimal, binary[32], index = 0;

    // Get user input
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index++] = decimal % 2;  // Store remainder
        decimal /= 2;  // Divide by 2
    }

    // Display binary number (in reverse order)
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

