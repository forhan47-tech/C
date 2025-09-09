#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int *const ptr = &a; 
    printf("Value of a: %d\n", *ptr); 

    *ptr = 30; // ✅ Allowed: Can modify value at 'ptr'
    printf("Modified value of a: %d\n", *ptr); 

    // ptr = &b; // ❌ ERROR: Cannot change pointer itself

    return 0;
}

