#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

void displayMessage() {
    printf("This is a message.\n");
    greet();  // Calls greet() function
}

int main() {
    displayMessage(); 
    return 0;
}

