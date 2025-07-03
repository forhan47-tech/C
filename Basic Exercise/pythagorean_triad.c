#include <stdio.h>

void pythagoreanTriple() {
    int a = 3, b = 4, c = 5; // Example triple
    if (a*a + b*b == c*c) {
        printf("Pythagorean Triple: %d, %d, %d\n", a, b, c);
    }
}

int main() {
    pythagoreanTriple();
    return 0;
}

