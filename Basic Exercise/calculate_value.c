#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Enter a real number x: ");
    scanf("%lf", &x);

    if (x != 0) {
        result = sin(1.0 / x);
        printf("sin(1/x) = %.6f\n", result);
    } else {
        printf("Undefined! Division by zero is not allowed.\n");
    }

    return 0;
}
