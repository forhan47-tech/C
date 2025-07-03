#include <stdio.h>

int main() {
    int a, b, sum = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap if needed
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0)
            sum += i;
    }

    printf("Sum of odd numbers between %d and %d = %d\n", a, b, sum);

    return 0;
}
