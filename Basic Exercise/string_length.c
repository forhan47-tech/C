#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input

    int length = 0;
    while (str[length] != '\0') { // Count characters until null terminator
        length++;
    }

    // Adjust for newline added by fgets()
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("String length: %d\n", length);
    return 0;
}
