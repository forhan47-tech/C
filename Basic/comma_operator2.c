#include <stdio.h>

int main() {
    int a = 5, b = 10, c;

    c = (a > b ? (a = a + b, b = b + 1) : (b = b - a, a = a - 1)); // Conditional logic with comma
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}