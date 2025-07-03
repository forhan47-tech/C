#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For abs()

int main() {
    double x = -3.7;
    int y = -4;

    // Nearest integer functions
    printf("ceil(x) = %.2f\n", ceil(x));  // Rounds up
    printf("floor(x) = %.2f\n", floor(x)); // Rounds down
    printf("round(x) = %.2f\n", round(x)); // Nearest integer
    printf("trunc(x) = %.2f\n", trunc(x)); // Truncates

    // Absolute value functions
    printf("fabs(x) = %.2f\n", fabs(x));   // Absolute value of float
    printf("abs(y) = %d\n", abs(y));         // Absolute value of integer

    return 0;
}