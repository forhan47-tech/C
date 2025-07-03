#include <stdio.h>

int main() {
    // Floating-point variables
    float f = 3.14159f;             // Single precision
    double d = 2.718281828459045;   // Double precision
    long double ld = 1.6180339887L; // Extended precision

    // Displaying values in default formats
    printf("Float: %f\n", f);               // %f for float (fixed-point)
    printf("Double: %lf\n", d);             // %lf for double
    printf("Long double: %Lf\n", ld);       // %Lf for long double

    // Scientific notation
    printf("Float (scientific): %e\n", f);  // %e for scientific
    printf("Double (scientific): %e\n", d); // %e for scientific

    // Shortest representation
    printf("Float (shortest): %g\n", f);    // %g for shortest representation
    printf("Double (shortest): %g\n", d);   // %g for shortest representation

    return 0;
}