#include <stdio.h>

void modifyValue(int *num) {
    *num = 100;  // This now modifies the actual value pointed to
    printf("Inside function: %d\n", *num);
}

int main() {
    int x = 10;
    printf("Before function call: %d\n", x);
    modifyValue(&x);  // Passing address of x
    printf("After function call: %d\n", x);  // Now x is actually modified!
    return 0;
}
