#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;  // Base case: F(0) = 0, F(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive step
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Compute Fibonacci number recursively
    }
    printf("\n");

    return 0;
}

