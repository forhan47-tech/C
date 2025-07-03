#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int num = n - 2; num > 1; num--) {
        if (isPrime(num) && isPrime(num - 2)) {
            printf("Max Twin Prime Below %d: (%d, %d)\n", n, num - 2, num);
            return 0;
        }
    }

    printf("No twin prime found below %d.\n", n);
    return 0;
}
