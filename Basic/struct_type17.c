#include <stdio.h>

struct Arithmetic {
    float num1;
    float num2;
};

int main() {
    struct Arithmetic op;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &op.num1, &op.num2);

    // Perform arithmetic operations
    printf("\nAddition: %.2f\n", op.num1 + op.num2);
    printf("Subtraction: %.2f\n", op.num1 - op.num2);

    printf("Multiplication: %.2f\n", op.num1 * op.num2);
    printf("Division: %.2f\n", (op.num2 != 0) ? (op.num1 / op.num2) : 0);
    return 0;
}

