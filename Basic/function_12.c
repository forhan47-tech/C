#include <stdio.h>

float calculateArea(float radius) {
    return 3.14 * radius * radius; 
}

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        float area = calculateArea(radius);
        printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    }

    return 0;
}