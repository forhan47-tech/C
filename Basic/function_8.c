#include <stdio.h>

void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int x = 5, y = 3, sum, product;

    calculate(x, y, &sum, &product);
    printf("Sum: %d, Product: %d\n", sum, product);

    return 0;
}

