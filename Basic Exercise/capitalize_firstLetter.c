#include <stdio.h>

int main() {
    char str[1000];
    int capitalizeNext = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if it's a lowercase letter and at word start
        if (capitalizeNext && ch >= 'a' && ch <= 'z') {
            str[i] = ch - ('a' - 'A');  // Convert to uppercase
            capitalizeNext = 0;
        }
        // If current character is space or punctuation, set flag
        else if (ch == ' ' || ch == '\t' || ch == '\n') {
            capitalizeNext = 1;
        } else {
            capitalizeNext = 0;
        }
    }

    printf("\nModified string:\n%s\n", str);
    return 0;
}
