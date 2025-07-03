#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    while (*ptr != '\0') { // Loop until null terminator
        printf("%c", *ptr);
        ptr++; // Move to next character
    }

    return 0;
}
