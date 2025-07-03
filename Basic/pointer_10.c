#include <stdio.h>

int main() {
    int a = 10;
    const int *const ptr = &a; // Constant pointer to a constant integer

    printf("Value of a: %d\n", *ptr); // Outputs: 10

    // *ptr = 20; // ❌ ERROR: Cannot modify value through 'p'
    // ptr = &b; // ❌ ERROR: Cannot change pointer itself

    return 0;
}

