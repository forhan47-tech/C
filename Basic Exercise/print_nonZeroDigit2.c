#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No non-zero digit.\n");
    } else {
        while (num % 10 == 0) {
            num /= 10;  // Remove trailing zeros
        }

        int lastNonZero = num % 10;
        printf("Last non-zero digit: %d\n", lastNonZero);
    }

    return 0;
}
