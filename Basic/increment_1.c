#include <stdio.h>

int main() {
    int a = 5, b;

    // Pre-increment
    b = ++a; // a becomes 6, b = 6
    printf("Pre-increment: a = %d, b = %d\n", a, b);

    // Post-increment
    a = 5; // Reset a
    b = a++; // b = 5, then a becomes 6
    printf("Post-increment: a = %d, b = %d\n", a, b);

    // Pre-decrement
    a = 5; // Reset a
    b = --a; // a becomes 4, b = 4
    printf("Pre-decrement: a = %d, b = %d\n", a, b);

    // Post-decrement
    a = 5; // Reset a
    b = a--; // b = 5, then a becomes 4
    printf("Post-decrement: a = %d, b = %d\n", a, b);

    return 0;
}