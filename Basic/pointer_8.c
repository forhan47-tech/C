#include <stdio.h>

int main() {
    int a = 10, b = 20;

    const int *ptr = &a; 
    printf("Value of a: %d\n", *ptr);

    // *ptr = 15; // ❌ ERROR: Cannot modify value through 'ptr'

    ptr = &b; // ✅ Allowed: Can change pointer itself
    printf("Value of b: %d\n", *ptr); 

    return 0;
}

