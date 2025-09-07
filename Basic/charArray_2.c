#include <stdio.h>

int main() {
    char str[] = "Hello, World!";  
    int length = 13;
    
    printf("Reversed String: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Print characters in reverse order
    }

    printf("\n");

    return 0;
}
