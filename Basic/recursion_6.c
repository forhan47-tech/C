#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int num = 10;
    printf("Sum of first %d numbers is %d\n", num, sum(num));
    return 0;
}
