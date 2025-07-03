#include <stdio.h>

void B(int n); // Forward declaration of B

void A(int n) {
    if (n <= 0) return;
    printf("A: %d\n", n);
    B(n - 1); // Calls another function
}

void B(int n) {
    if (n <= 0) return;
    printf("B: %d\n", n);
    A(n - 2); // Calls original function
}

int main() {
    A(6);
    return 0;
}
