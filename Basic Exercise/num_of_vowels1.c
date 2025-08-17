#include <stdio.h>
#include <ctype.h>  // For character functions

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read full line input

    // Traverse each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for uniform comparison

        if (isalpha(ch)) {  // Check if alphabetic character
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

