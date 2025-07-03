#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.0;
    double result = a / b;  // `a` is promoted to `float`, and result stores as double
    printf("Result: %.2lf\n", result);  // Output: 2.50
    return 0;
}