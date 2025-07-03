#include <stdio.h>

int main() {
    double x1, y1, x2, y2, slope;

    // User input
    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Check for vertical line (undefined slope)
    if (x2 - x1 == 0) {
        printf("Slope is undefined (vertical line).\n");
    } else {
        // Compute slope
        slope = (y2 - y1) / (x2 - x1);
        printf("Slope of the line: %.2f\n", slope);
    }

    return 0;
}

