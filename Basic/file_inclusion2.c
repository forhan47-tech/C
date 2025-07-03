#include <stdio.h>
#include "shapes.h"  // Include the header file to use the functions

int main() {
    double circleRadius = 5.0;
    double rectangleLength = 10.0;
    double rectangleWidth = 4.0;

    printf("Circle Area: %.2f\n", calculateCircleArea(circleRadius));
    printf("Rectangle Area: %.2f\n", calculateRectangleArea(rectangleLength, rectangleWidth));

    return 0;
}
