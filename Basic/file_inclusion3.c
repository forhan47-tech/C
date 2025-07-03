#include <stdio.h>
#include "math.h"

int main() {
    double radius = 5.0;
    double length = 10.0, width = 4.0;
    double base = 6.0, height = 3.0;
    double side = 7.0;

    printf("Circle Area: %.2f\n", calculateCircleArea(radius));
    printf("Rectangle Area: %.2f\n", calculateRectangleArea(length, width));
    printf("Triangle Area: %.2f\n", calculateTriangleArea(base, height));
    printf("Square Area: %.2f\n", calculateSquareArea(side));

    return 0;
}
