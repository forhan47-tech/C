#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    // Prompt the user to enter a string
    printf("Enter a string (max 19 chars): ");
    fgets(str, sizeof(str), stdin); // Read input from the user

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Output the validated string
    printf("Validated input: %s\n", str);

    return 0;
}