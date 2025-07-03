#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *const ptr = &a; // 'p' is a constant pointer to 'a'

    printf("Value of a: %d\n", *ptr); // Outputs: 10

    *ptr = 30; // ✅ Allowed: Can modify value at 'p'
    printf("Modified value of a: %d\n", *ptr); // Outputs: 30

    // ptr = &b; // ❌ ERROR: Cannot change pointer itself

    return 0;
}

