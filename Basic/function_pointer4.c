#include <stdio.h>

// Function to return a greeting message
char* getMessage() {
    return "Hello, User!"; // Return a string literal
}

int main() {
    char* message = getMessage();
    printf("%s\n", message);
    return 0; 
}