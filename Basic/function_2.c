#include <stdio.h>

// no return type, two integer parameters
void showSum(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

int main() {
    showSum(10, 20);
    return 0;
}
