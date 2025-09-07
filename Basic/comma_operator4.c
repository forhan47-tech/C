#include <stdio.h>

int main() {
    int i = 0, j = 10;

    while (i < 5) {
        printf("i = %d, j = %d\n", i, j);
        i++, j--; // Increment i and decrement j in one statement using the comma operator
    }

    return 0;
}