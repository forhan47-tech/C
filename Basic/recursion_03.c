#include <stdio.h>

void tailRecursion(int n) {
    if (n == 0) return; // Base case
    
    printf("%d ", n);
    tailRecursion(n - 1); // Tail call (last action)
}

int main() {
    tailRecursion(5);
    return 0;
}
