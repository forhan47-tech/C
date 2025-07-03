#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Count all characters except the null terminator
    count = strlen(text);

    // Remove newline if present
    if (text[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}
