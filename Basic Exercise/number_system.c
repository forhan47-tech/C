#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a decimal number (0-255): ");
    scanf("%d", &num);

    // Binary Conversion using Bitwise Operators (8-bit format)
    printf("Binary (8-bit): ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    // Octal and Hexadecimal conversion using format specifiers
    printf("Octal: %o\n", num);       // %o for octal representation
    printf("Hexadecimal: %x\n", num); // %x for uppercase hexadecimal

    return 0;
}

