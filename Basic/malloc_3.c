#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char*)malloc(50 * sizeof(char));  // Allocate 50 characters

    if (str == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;  // Exit if allocation failed
    }

    printf("Enter your name: ");
    fgets(str, 50, stdin);

    printf("Hello, %s", str);

    free(str);  // Free allocated memory

    return 0;
}

