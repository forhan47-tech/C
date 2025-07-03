#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

void displayMessage() {
    printf("This is a message.\n");
    greet();  // Calling another function inside displayMessage()
}

int main() {
    displayMessage();  // Calls displayMessage(), which calls greet()
    return 0;
}

