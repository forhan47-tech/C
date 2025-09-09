#include <stdio.h>
#include <stdint.h>

int main() {
    int decimal = 100;          // Decimal constant
    printf("Decimal: %d\n", decimal); 

    int octal = 012;            // Octal constant
    printf("Octal: %d\n", octal); 

    int hex = 0x1A;             // Hexadecimal constant 
    printf("Hexadecimal: %d\n", hex); 

    int binary = 0b1101;        // Binary constant
    printf("Binary: %d\n", binary); 

    return 0;
}