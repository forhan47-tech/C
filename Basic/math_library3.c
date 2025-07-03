#include <stdio.h>
#include <math.h>

int main() {
    double a = 4.0, b = 3.0, c = 2.0;

    // Using pow: Compute a^c
    double power = pow(a, c);
    printf("a raised to the power c is %.2f\n", power);

    // Using sqrt: Compute square root of a
    double square_root = sqrt(a);
    printf("Square root of a is %.2f\n", square_root);

    // Using fmod: Calculate remainder of a divided by b
    double remainder = fmod(a, b);
    printf("Remainder of a divided by b is %.2f\n", remainder);

    // Using cbrt: Compute cube root of a
    double cube_root = cbrt(a);
    printf("Cube root of a is %.2f\n", cube_root);

    // Using hypot: Compute hypotenuse of sides b and c
    double hypotenuse = hypot(b, c);
    printf("Hypotenuse of sides b and c is %.2f\n", hypotenuse);

    return 0;
}