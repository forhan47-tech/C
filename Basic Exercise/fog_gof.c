#include <stdio.h>

// Define function f(x) = x^2 + 2
double f(double x) {
    return (x * x) + 2;
}

// Define function g(x) = 3x - 4
double g(double x) {
    return (3 * x) - 4;
}

// Compute fog(x) = f(g(x))
double fog(double x) {
    return f(g(x));
}

// Compute gof(x) = g(f(x))
double gof(double x) {
    return g(f(x));
}

int main() {
    double x = 5;  // Example input value

    printf("fog(%lf) = %lf\n", x, fog(x));
    printf("gof(%lf) = %lf\n", x, gof(x));

    return 0;
}
