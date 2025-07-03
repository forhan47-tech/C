#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to check if a number is semi-prime
bool isSemiPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int factor1 = i;
            int factor2 = n / i;
            // Check if both factors are prime
            if (isPrime(factor1) && isPrime(factor2)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isSemiPrime(num)) {
        printf("%d is a semi-prime number.\n", num);
    } else {
        printf("%d is not a semi-prime number.\n", num);
    }
    
    return 0;
}

    