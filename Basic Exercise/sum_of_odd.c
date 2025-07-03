#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter 5 integers:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 != 0)
            sum += num;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}
