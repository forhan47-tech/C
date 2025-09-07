#include <stdio.h>

int main() {
    // Explicit Casting: float to int
    float f = 3.7;
    int i = (int)f; 

    printf("Original float value: %f\n", f);
    printf("After casting to int: %d\n", i);  

    // Implicit Conversion: int to float
    int a = 10;
    float b = a; 

    printf("Original int value: %d\n", a);
    printf("After converting to float: %.2f\n", b);  

    return 0;
}