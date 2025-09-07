#include <stdio.h>

int main() {
    int a = 10;
    const int *const ptr = &a; 

    printf("Value of a: %d\n", *ptr); 

    // *ptr = 20; // ❌ ERROR: Cannot modify value through 'ptr'
    // ptr = &b; // ❌ ERROR: Cannot change pointer itself

    return 0;
}

