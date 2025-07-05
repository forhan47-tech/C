#include <stdio.h>

int square(int x) {
    return x * x;
}

void testSquare() {
    if (square(3) != 9) {
        printf("❌ Test failed: square(3)\n");
    } else {
        printf("✅ Test passed: square(3)\n");
    }
}

int main() {
    testSquare();
    return 0;
}
