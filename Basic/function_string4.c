#include <stdio.h>

// Function to modify string
void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;  // Convert lowercase to uppercase
        }
    }
}

int main() {
    char text[] = "hello world";

    convertToUppercase(text);  // Modify string inside function
    printf("Uppercase: %s\n", text);

    return 0;
}

