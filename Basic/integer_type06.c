#include <stdio.h>

int main() {
    int octal, hexadecimal;

    printf("Enter an octal number (start with 0): "); // octal constant
    scanf("%o", &octal);

    printf("Enter a hexadecimal number (start with 0x): "); // hexadecimal constant
    scanf("%x", &hexadecimal); 

    printf("You entered octal: %o (decimal: %d)\n", octal, octal);
    printf("You entered hexadecimal: %x (decimal: %d)\n", hexadecimal, hexadecimal);

    return 0;
}