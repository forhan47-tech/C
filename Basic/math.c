#include "math.h"

#define PI 3.14159

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateSquareArea(double side) {
    return side * side;
}
