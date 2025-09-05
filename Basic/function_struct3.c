#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

void addComplex(Complex c1, Complex c2, Complex *result) {
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}

int main() {
    Complex a = {2.0, 3.0};
    Complex b = {1.5, 4.5};
    Complex sum;

    addComplex(a, b, &sum);
    printf("Sum: %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
