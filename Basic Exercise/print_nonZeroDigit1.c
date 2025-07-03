#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No non-zero digit.\n");
        return 0;
    }

    // Convert to positive if negative
    if (num < 0) num = -num;

    // Strip digits until only the first nonzero remains
    while (num >= 10) {
        num /= 10;
    }

    printf("First non-zero digit: %d\n", num);

    return 0;
}
