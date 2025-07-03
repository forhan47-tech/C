#include <stdio.h>

float divide(float a, float b) {
    return a / b;
}

int main() {
    float result = divide(10.0, 4.0);
    printf("Quotient: %.2f\n", result);
    return 0;
}
