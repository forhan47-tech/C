#include <stdio.h>

// Define a macro VERSION
#define VERSION 1

int main() {
    // This line triggers a custom error if reached
    #error "This is an error message."

    // Conditional preprocessor directive
    #if VERSION < 2
        #error "Version is too old! Update required."
    #endif

    printf("Code compiled successfully.\n");
    return 0;
}