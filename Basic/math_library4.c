#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.5;

    printf("asin(%.1f) = %.4f radians\n", x, asin(x));
    printf("acos(%.1f) = %.4f radians\n", x, acos(x));
    printf("atan(%.1f) = %.4f radians\n", x, atan(x));
    printf("sinh(%.1f) = %.4f\n", x, sinh(x));
    printf("cosh(%.1f) = %.4f\n", x, cosh(x));
    printf("tanh(%.1f) = %.4f\n", x, tanh(x));

    return 0;
}
