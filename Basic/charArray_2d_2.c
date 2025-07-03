#include <stdio.h>

int main() {
    char *strings[] = {
        "Hello",
        "World",
        "C Programming"
    };

    int size = sizeof(strings) / sizeof(strings[0]); // Calculate the number of elements

    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]); // Print each string
    }

    return 0;
}

