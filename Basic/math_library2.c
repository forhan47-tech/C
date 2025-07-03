#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.0; // Example input value

    // Using exp(x): Calculates e^x
    double exp_result = exp(x);
    printf("The value of e^x is %.2f\n", exp_result);

    // Using log(x): Calculates natural logarithm (base e)
    double log_result = log(x);
    printf("The natural logarithm (log base e) of x is %.2f\n", log_result);

    // Using log10(x): Calculates base-10 logarithm
    double log10_result = log10(x);
    printf("The base-10 logarithm (log base 10) of x is %.2f\n", log10_result);

    return 0;
}