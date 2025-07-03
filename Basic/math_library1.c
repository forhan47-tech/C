#include <stdio.h>
#include <math.h>

int main() {
    double degrees = 45.0; 
    double radians = degrees * (M_PI / 180.0);  // Convert degrees to radians

    // Basic trigonometric functions
    printf("Sine of 45°: %.2f\n", sin(radians));  // Computes sine of the angle
    printf("Cosine of 45°: %.2f\n", cos(radians));  // Computes cosine of the angle
    printf("Tangent of 45°: %.2f\n", tan(radians));  // Computes tangent of the angle

    // Inverse trigonometric functions
    printf("Arcsine of 0.707: %.2f radians\n", asin(0.707));  // Computes arcsine
    printf("Arccosine of 0.707: %.2f radians\n", acos(0.707));  // Computes arccosine
    printf("Arctangent of 0.707: %.2f radians\n", atan(0.707));  // Computes arctangent

    // Hyperbolic functions
    double value = 1.0;  // Input for hyperbolic functions
    printf("Hyperbolic sine of 1.0: %.2f\n", sinh(value));  // Computes sinh(x)
    printf("Hyperbolic cosine of 1.0: %.2f\n", cosh(value));  // Computes cosh(x)
    printf("Hyperbolic tangent of 1.0: %.2f\n", tanh(value));  // Computes tanh(x)

    return 0;
}