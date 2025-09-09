#include <stdio.h>

int main() {
    int num;

    while (1) { 
        printf("Enter a number (enter 0 to exit): ");
        scanf("%d", &num);

        if (num == 0) {
            break; // Exit from infinite loop when input is 0
        }

        printf("You entered %d\n", num);
    }

    printf("Goodbye!\n");
    return 0;
}