#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;  // Base case
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Compute sum of factorials of digits
    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the number is a Strong number
    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    return 0;
}

