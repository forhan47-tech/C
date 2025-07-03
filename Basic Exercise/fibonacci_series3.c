#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fib[n];  // Declare an array to store Fibonacci numbers
    fib[0] = 0;  // First Fibonacci number
    fib[1] = 1;  // Second Fibonacci number

    // Generate Fibonacci series using an array
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];  // Store calculated values in the array
    }

    // Display the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}
