#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double side1, side2, side3, perimeter;
    double centroid_x, centroid_y;

    // User input for three vertices
    printf("Enter coordinates of first vertex (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of second vertex (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter coordinates of third vertex (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Compute sides using distance formula
    side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    side3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Compute perimeter
    perimeter = side1 + side2 + side3;

    // Compute centroid
    centroid_x = (x1 + x2 + x3) / 3;
    centroid_y = (y1 + y2 + y3) / 3;

    // Display results
    printf("Perimeter of the Triangle: %.2f\n", perimeter);
    printf("Centroid of the Triangle: (%.2f, %.2f)\n", centroid_x, centroid_y);

    return 0;
}

