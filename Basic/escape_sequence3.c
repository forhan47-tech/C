#include <stdio.h>

int main() {
    // \ooo - Octal values
    printf("Octal: \072\065\n");  // Prints ":5"

    // \xhh - Hexadecimal values
    printf("Hex: \x41\x42\x43\n");  // Prints "ABC"

    // \0 - Null character in string
    char str[] = "NAIM\0UDDIN";
    printf("String with null: %s\n", str);  // Only "NAIM" prints

    return 0;
}
