#include <stdio.h>

int main() {
    int number;

    repeat:
    printf("Enter a number (enter 0 to stop): ");
    scanf("%d", &number);

    if (number != 0) {
        printf("You entered: %d\n", number);
        goto repeat; // Repeats the prompt until 0 is entered
    }

    printf("Program terminated.\n");
    return 0;
}