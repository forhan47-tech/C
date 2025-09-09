#include <stdio.h>

int main() {
    float num1 = 10, num2 = 20;
    float *ptr1 = &num1, *ptr2 = &num2;

    // Perform arithmetic operations using pointers
    printf("Addition: %.2f\n", *ptr1 + *ptr2);
    printf("Subtraction: %.2f\n", *ptr1 - *ptr2);
    printf("Multiplication: %.2f\n", (*ptr1) * (*ptr2));

    if (*ptr2 != 0)
        printf("Division: %.2f\n", (*ptr1) / (*ptr2));
    
    return 0;
}

