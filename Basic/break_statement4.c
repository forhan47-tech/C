#include <stdio.h>

int main() {
    int num;

    while (1) { // Infinite loop
        printf("Enter a number (enter 0 to exit): ");
        scanf("%d", &num);

        if (num == 0) {
            break; // Exit loop when input is 0
        }

        printf("You entered %d\n", num);
    }

    printf("Goodbye!\n");
    return 0;
}