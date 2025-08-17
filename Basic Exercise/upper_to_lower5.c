#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase
        ch = ch + 32;
        printf("Lowercase: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase
        ch = ch - 32;
        printf("Uppercase: %c\n", ch);
    } else {
        printf("Character is not a letter.\n");
    }

    return 0;
}
