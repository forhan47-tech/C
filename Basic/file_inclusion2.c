#include <stdio.h>
#include "myfile2.h"

int main() {
    double radius = 5.0;
    double length = 10.0, width = 4.0;
    
    printf("Circle Area: %.2f\n", calculateCircleArea(radius));
    printf("Rectangle Area: %.2f\n", calculateRectangleArea(length, width));
    return 0;
}
