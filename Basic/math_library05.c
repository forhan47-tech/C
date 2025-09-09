#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.7;

    printf("ceil(%.1f) = %.1f\n", x, ceil(x));
    printf("floor(%.1f) = %.1f\n", x, floor(x));
    printf("round(%.1f) = %.1f\n", x, round(x));
    printf("trunc(%.1f) = %.1f\n", x, trunc(x));

    return 0;
}
