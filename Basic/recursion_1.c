#include <stdio.h>

void directRecursion(int n) {
    if (n <= 0) return; // Base case
    
    printf("%d ", n);
    directRecursion(n - 1); // Recursive call
}

int main() {
    directRecursion(5);
    return 0;
}
