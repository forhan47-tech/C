#include <stdio.h>

void nonTailRecursion(int n) {
    if (n == 0) return;
    
    nonTailRecursion(n - 1); // Recursive call happens first
    printf("%d ", n); // Additional operation after recursion
}

int main() {
    nonTailRecursion(5);
    return 0;
}
