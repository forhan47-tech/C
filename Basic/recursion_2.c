#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)   // Base case: If n is 0 or 1, return n
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: Sum of the two preceding Fibonacci numbers
    
}

int main() {
    int num = 10; // Number of terms in the Fibonacci sequence
    printf("Fibonacci sequence up to term %d:\n", num);

    // Loop to print each term in the Fibonacci sequence
    for (int i = 0; i <= num; i++) {
        printf("%d ", fibonacci(i)); // Print the ith Fibonacci number
    }
    return 0; // End of the program
}