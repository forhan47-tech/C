#include <stdio.h>

int main() {
    // Explicit Casting: float to int
    float f = 3.7;
    int i = (int)f;  // Explicitly casting float to int
    printf("Explicit Casting:\n");
    printf("Original float value: %.2f\n", f);
    printf("After casting to int: %d\n", i);  // Output: 3

    // Implicit Conversion: int to float
    int a = 10;
    float b = a;  // Implicitly converting int to float
    printf("\nImplicit Conversion:\n");
    printf("Original int value: %d\n", a);
    printf("After converting to float: %.2f\n", b);  // Output: 10.00

    return 0;
}