#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world from C";
    char* words[50]; // Array to store words
    int count = 0;

    char* token = strtok(str, " "); // Split by spaces
    while (token != NULL) {
        words[count++] = token; // Store words
        token = strtok(NULL, " "); // Move to the next token
    }

    // Print words
    printf("Words:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]); // Print each word on a new line
    }

    return 0;
}
