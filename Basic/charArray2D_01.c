#include <stdio.h>

int main() {
    char strings[3][20] = {
        "Hello",
        "World",
        "C Programming"
    };

    // Accessing individual characters
    printf("First character of first string: %c\n", strings[0][0]);

    // accessing individual string
    printf("First word: %s\n", strings[0]);

    // Accessing and printing each string
    for (int i = 0; i < 3; i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    return 0;
}