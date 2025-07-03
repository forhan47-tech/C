#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // Macro to find the maximum of two numbers

int main() {
    int x = 10, y = 20;
    printf("The maximum of %d and %d is %d\n", x, y, MAX(x, y));
    return 0;
}