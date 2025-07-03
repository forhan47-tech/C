#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    while (num != 0) {
        digit = num % 10;   // Extract last digit
        reversed = reversed * 10 + digit;  // Build reversed number
        num /= 10;          // Remove last digit
    }

    // Compare original number with reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

