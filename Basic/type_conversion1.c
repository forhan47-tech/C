#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.0;
    float result = a / b;  // `a` is promoted to `float` automatically
    printf("Result: %.2f\n", result);  // Output: 2.50
    return 0;
}