#include <stdio.h>

int main() {
    int a, b, c;

    c = (a = 5, b = 10, a + b); // Multiple assignments and addition
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}