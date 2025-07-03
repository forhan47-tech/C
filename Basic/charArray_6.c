#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads an entire line
    puts(str); // Outputs the string using puts

    return 0;
}

