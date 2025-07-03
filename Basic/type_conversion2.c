#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result = (float)a / b;  // Cast `a` to `float` explicitly
    printf("Result: %.2f\n", result);  // Output: 2.50
    return 0;
}