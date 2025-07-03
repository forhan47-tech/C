#include <stdio.h>

int main() {
    int x = 0, y = 10;

    while (x <= y && (x++, y--)) { // Increment x and decrement y during the condition evaluation
        printf("x = %d, y = %d\n", x, y);
    }

    return 0;
}