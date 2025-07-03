#include <stdio.h>

int main() {
    int a = 10, b = 20;
    const int *ptr = &a; // p points to 'a'

    printf("Value of a: %d\n", *ptr); // Outputs: 10

    // *ptr = 15; // ❌ ERROR: Cannot modify value through 'p'

    ptr = &b; // ✅ Allowed: Can change pointer to another integer
    printf("Value of b: %d\n", *ptr); // Outputs: 20

    return 0;
}

