#include <stdio.h>

void calculate(int a, int b, int sum, int product) {
    sum = a + b;
    product = a * b;
    printf("Inside calculate (by value): Sum = %d, Product = %d\n", sum, product);
}

int main() {
    int x = 5, y = 3, sum = 0, product = 0;

    calculate(x, y, sum, product);
    printf("Inside main: Sum = %d, Product = %d\n", sum, product);  // Still 0

    return 0;
}
