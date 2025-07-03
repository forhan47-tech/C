#include <stdio.h>
#include <stdint.h>

int main() {
    int decimal = 100;          // Decimal constant
    printf("Decimal: %d\n", decimal); // Prints 100

    int octal = 012;            // Octal constant (10 in decimal)
    printf("Octal: %d\n", octal); // Prints 10

    int hex = 0x1A;             // Hexadecimal constant (26 in decimal)
    printf("Hexadecimal: %d\n", hex); // Prints 26

    int binary = 0b1101;        // Binary constant (13 in decimal)
    printf("Binary: %d\n", binary); // Prints 13

    return 0;
}