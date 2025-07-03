#include <stdio.h>
#include <math.h>

int main() {
    double x, y, x_c, y_c, r, distance;

    // User input
    printf("Enter coordinates of a point on the shape (x, y): ");
    scanf("%lf %lf", &x, &y);
    printf("Enter center (x_c, y_c) and radius r of the shape: ");
    scanf("%lf %lf %lf", &x_c, &y_c, &r);

    // Compute distance from center
    distance = sqrt(pow(x - x_c, 2) + pow(y - y_c, 2));

    if (fabs(distance - r) < 1e-6)
        printf("The shape is a Circle.\n");
    else
        printf("The shape is NOT a Circle.\n");

    return 0;
}

