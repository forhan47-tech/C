#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input

    int count = 0, i = 0;
    while (str[i] != '\0') {
        if ((str[i] != ' ' && str[i] != '\n') && (i == 0 || str[i - 1] == ' ')) {
            count++; // Count new word when transition from space
        }
        i++;
    }

    printf("Word count: %d\n", count);
    return 0;
}
