#include <stdio.h>
#include <math.h>

int main() {
    double x = 10.0;

    printf("exp(1.0) = %.2f\n", exp(1.0));        
    printf("log(%.1f) = %.2f\n", x, log(x));      
    printf("log10(%.1f) = %.2f\n", x, log10(x));   

    return 0;
}
