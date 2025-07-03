#include <stdio.h>

int main() {
    int num, digits[10], count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("- ");
        num = -num;
    }

    // Handle zero explicitly
    if (num == 0) {
        digits[0] = 0;
        count = 1;
    } else {
        // Extract digits in reverse order
        while (num > 0) {
            digits[count++] = num % 10;
            num /= 10;
        }
    }

    // Print digits in correct order
    printf("Digits separated by spaces: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\n");
    return 0;
}
