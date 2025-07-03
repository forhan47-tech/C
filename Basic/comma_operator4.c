#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0;

    c = (a++, b++, a + b); // Increment a, b, and calculate a + b
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}