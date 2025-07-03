#include <stdio.h>

int main() {
    int decimal, octal[32], index = 0;

    // Get user input
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        octal[index++] = decimal % 8;  // Store remainder
        decimal /= 8;  // Divide by 2
    }

    // Display binary number (in reverse order)
    printf("Octal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");

    return 0;
}
