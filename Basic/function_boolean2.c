
#include <stdio.h>
#include <stdbool.h>

// Function that returns true if the number is positive
bool isPositive(int number) {
    return number > 0;
}

int main() {
    int x = -10;

    if (isPositive(x))
        printf("Positive number!\n");
    else
        printf("Not positive.\n");

    return 0;
}
