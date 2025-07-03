#include "shapes.h"  

#define PI 3.14159

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}
