#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int abs_n = abs(n);

    printf("Divisors of %d: ", n);
    for (int i = 1; i <= abs_n; i++) {
        if (abs_n % i == 0) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }

    printf("\nTotal divisors: %d\n", count);
    printf("Sum of divisors: %d\n", sum);

    if (count == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
