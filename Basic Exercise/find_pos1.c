#include <stdio.h>

int main() {
    int num, max, position;

    printf("Enter 5 integers:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (i == 1 || num > max) {
            max = num;
            position = i;
        }
    }

    printf("\nHighest value = %d\n", max);
    printf("Position = %d\n", position);

    return 0;
}
