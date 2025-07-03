#include <stdio.h>

int main() {
    char ch;

    // Reading a character
    printf("Enter a character: ");
    ch = getchar();

    // Writing the character
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    return 0;
}