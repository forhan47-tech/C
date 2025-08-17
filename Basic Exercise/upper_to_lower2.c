#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Flip the case of the character
    ch = ch ^ 32;

    //ch = ch | 32;  // Bitwise OR with 32 to convert uppercase to lowercase

    printf("Flipped case: %c\n", ch);

    return 0;
}

