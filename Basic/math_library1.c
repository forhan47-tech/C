#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0, y = 2.0;

    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));
    printf("cbrt(%.1f) = %.2f\n", x, cbrt(x));
    printf("fabs(-%.1f) = %.2f\n", x, fabs(-x));
    printf("fmod(%.1f, %.1f) = %.2f\n", x, y, fmod(x, y));
    printf("hypot(%.1f, %.1f) = %.2f\n", x, y, hypot(x, y)); 

    return 0;
}
