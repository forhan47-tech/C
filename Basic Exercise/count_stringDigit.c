#include <stdio.h>
#include <ctype.h>  // For character functions

int main() {
    char str[200];
    int digits = 0;

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read full line input

    // Traverse each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))  // Check if character is a digit
            digits++;
    }

    // Display result
    printf("Number of digits: %d\n", digits);

    return 0;
}

