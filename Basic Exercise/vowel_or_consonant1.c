#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase for uniform comparison
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch | 32;  // Bitwise OR with 32 to convert uppercase to lowercase
    }

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}

