#include <stdio.h>

void greet() {
    printf("Hello!\n");
    return; // Explicitly ends the function (optional here)
}

int main() {
    greet(); // Outputs: Hello!
    return 0;
}