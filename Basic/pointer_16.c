#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*func_ptr)(int, int) = add;  // Declare a pointer to a function
    int result = func_ptr(5, 3);      // Call the function via the pointer
    printf("Result: %d\n", result);   // Prints 8
    return 0;
}
