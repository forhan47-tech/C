#include <stdio.h>

int main() {
    char original[] = "Hello, World!";  // Define the original string
    char copied[50];  // Destination array (ensure it's large enough)
    int i = 0;

    // Copy each character until the null terminator (`\0`)
    while (original[i] != '\0') {
        copied[i] = original[i];
        i++;
    }
    copied[i] = '\0';  // Append null terminator at the end

    // Display copied string
    printf("Copied String: %s\n", copied);

    return 0;
}

