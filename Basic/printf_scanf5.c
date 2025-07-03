#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");

    if (scanf("%d", &num) == 1) {  // Only proceed if a valid integer is entered
        printf("You entered: %d\n", num);
    } else {
        printf("Invalid input! Please enter a number.\n");
    }

    return 0;
}
