#include <stdio.h>

int main() {
    float num1, num2;
    float *ptr1 = &num1, *ptr2 = &num2;

    // Perform arithmetic operations using pointers
    printf("\nResults:\n");
    printf("Addition: %.2f\n", *ptr1 + *ptr2);
    printf("Subtraction: %.2f\n", *ptr1 - *ptr2);
    printf("Multiplication: %.2f\n", (*ptr1) * (*ptr2));

    // Handle division safely
    if (*ptr2 != 0)
        printf("Division: %.2f\n", (*ptr1) / (*ptr2));
    else
        printf("Division: Undefined (Cannot divide by zero)\n");

    return 0;
}

