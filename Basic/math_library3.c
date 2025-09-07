#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
    double angle = 45.0;
    double rad = angle * PI / 180.0;

    printf("sin(%.1f°) = %.4f\n", angle, sin(rad));
    printf("cos(%.1f°) = %.4f\n", angle, cos(rad));
    printf("tan(%.1f°) = %.4f\n", angle, tan(rad));

    return 0;
}
