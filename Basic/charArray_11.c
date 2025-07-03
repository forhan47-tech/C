#include <stdio.h>

int main() {
    char str[] = "Hello, World!";  // Define a string
    int length = 13;  // Length of the string
    
    printf("Reversed String: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Print characters in reverse order
    }

    printf("\n");

    return 0;
}
