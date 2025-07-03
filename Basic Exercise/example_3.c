#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime palindromes between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
