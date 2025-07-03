#include <stdio.h>

int main() {
    char ch;

    // Reading a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c ensures it ignores whitespace

    // Writing the character
    printf("You entered: %c\n", ch);

    return 0;
}