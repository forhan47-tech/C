#include <stdio.h>

int main() {
    int A, B, Sum, Carry;

    // Get user input
    printf("Enter first binary input (0 or 1): ");
    scanf("%d", &A);
    printf("Enter second binary input (0 or 1): ");
    scanf("%d", &B);

    // Perform half adder operations
    Sum = A ^ B;  // XOR operation for sum
    Carry = A & B; // AND operation for carry

    // Display results
    printf("Sum: %d\n", Sum);
    printf("Carry: %d\n", Carry);

    return 0;
}

