#include <stdio.h>

// Function using a local variable
void showMessage() {
    int x = 5; // x is local to showMessage
    printf("Inside showMessage: x = %d\n", x);
}

int main() {
    showMessage();

    // Trying to access x here will produce a compilation error
    // printf("Outside showMessage: x = %d\n", x); // ❌ Uncommenting this will trigger an error

    return 0;
}
