#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter an integer less than 500: ");
    scanf("%d", &num);

    if (num >= 0 && num < 500) {
        int temp = num;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("Sum of digits = %d\n", sum);
    } else {
        printf("Invalid input! Number must be between 0 and 499.\n");
    }

    return 0;
}
