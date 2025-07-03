#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int abs_n = abs(n); // Handle negative input

    printf("Divisors of %d:\n", n);
    for (int i = 1; i <= abs_n; i++) {
        if (abs_n % i == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
