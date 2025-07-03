#include <stdio.h>

int main() {
    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    for (int i = 0; i < 4; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator *= 2;
    }

    printf("Sum of the series S = %.6f\n", sum);

    return 0;
}
