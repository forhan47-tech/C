#include <stdio.h>

// Global variable: accessible anywhere in this file
int x = 10;

int main() {
    printf("Global x: %d\n", x); // Output: 10

    int y = 20; // Local to main()
    printf("Local y in main: %d\n", y); // Output: 20

    // Start of conditional block
    if (1) {
        int z = 30; // z is local to this block
        printf("Inside if block - z: %d\n", z); // ✅ Works here
    }

    // printf("Outside if block - z: %d\n", z); // ❌ Compile error: 'z' is not declared here

    return 0;
}
