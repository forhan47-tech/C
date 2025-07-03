#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3, angle1, angle2, angle3;

    // User input
    printf("Enter the three sides: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    printf("Enter the three angles: ");
    scanf("%lf %lf %lf", &angle1, &angle2, &angle3);

    // Check Triangle Validity
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1) &&
        fabs(angle1 + angle2 + angle3 - 180.0) < 1e-6) {
        
        printf("The shape is a Triangle.\n");

        // Identify triangle type by sides
        if (side1 == side2 && side2 == side3)
            printf("It is an Equilateral Triangle.\n");
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            printf("It is an Isosceles Triangle.\n");
        else
            printf("It is a Scalene Triangle.\n");

        // Identify triangle type by angles
        if (angle1 == 90 || angle2 == 90 || angle3 == 90)
            printf("It is a Right-angled Triangle.\n");
        else if (angle1 < 90 && angle2 < 90 && angle3 < 90)
            printf("It is an Acute Triangle.\n");
        else
            printf("It is an Obtuse Triangle.\n");

    } else {
        printf("The shape is NOT a Triangle.\n");
    }

    return 0;
}

