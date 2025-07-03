#include <stdio.h>

#define SQUARE(x) ((x) * (x))  // Macro to compute the square of a number

int main() {
    int num = 5;
    int result = SQUARE(num);  // Expands to ((5) * (5)), which equals 25.

    printf("The square of %d is %d\n", num, result);

    return 0;
}

