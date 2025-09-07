#include <stdio.h>

int x = 10; // Global variable: Accessible anywhere

int main() {
    printf("Global x: %d\n", x); 

    if (1) {
        int z = 30; // z is local to this block
        printf("Inside if block - z: %d\n", z); // ✅ Works here
    }
    // printf("Outside if block - z: %d\n", z); // ❌ Compile error: 'z' is not declared here
    return 0;
}
