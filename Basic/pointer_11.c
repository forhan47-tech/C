#include <stdio.h>

void greet() {
    printf("Hello, world!\n");
}

int main() {
    void (*func_ptr)() = greet; // Pointer to the 'greet' function
    func_ptr();                // Calls the function indirectly
    return 0;
}

