#include <stdio.h>

int main() {
    int octal, hexadecimal;

    printf("Enter an octal number (start with 0): ");
    scanf("%o", &octal); // Use %o to read an octal number

    printf("Enter a hexadecimal number (start with 0x): ");
    scanf("%x", &hexadecimal); // Use %x to read a hexadecimal number

    printf("You entered octal: %o (decimal: %d)\n", octal, octal);
    printf("You entered hexadecimal: %x (decimal: %d)\n", hexadecimal, hexadecimal);

    return 0;
}