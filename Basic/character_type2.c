#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c ensures it ignores whitespace

    printf("You entered: %c\n", ch);

    return 0;
}