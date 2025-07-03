#include <stdio.h>

int main() {
    float f;
    double d;
    long double ld;

    // Reading values from the user
    printf("Enter a float: ");
    scanf("%f", &f);  // Read float value

    printf("Enter a double: ");
    scanf("%lf", &d); // Read double value

    printf("Enter a long double: ");
    scanf("%Lf", &ld); // Read long double value

    // Displaying the inputs
    printf("You entered float: %f\n", f);
    printf("You entered double: %lf\n", d);
    printf("You entered long double: %Lf\n", ld);

    return 0;
}