#include <stdio.h>

int main() {
    char str[256];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if you want to exclude the newline character from fgets
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("Total number of characters: %d\n", count);
    return 0;
}
