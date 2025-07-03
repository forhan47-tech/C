#include <stdio.h>

int main() {
    int b, limit;

    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    if (b == 0) {
        printf("Multiples of 0 are undefined.\n");
        return 0;
    }

    printf("Multiples of %d up to %d:\n", b, limit);
    for (int i = 0; i <= limit; i++) {
        if (i % b == 0) {
            printf("%d is a multiple of %d\n", i, b);
        }
    }

    return 0;
}
