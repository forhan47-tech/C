#include <stdio.h>

void modifyValue(int num) {
    num = 100;  // This change only affects the copy
    printf("Inside function: %d\n", num);
}

int main() {
    int x = 10;
    printf("Before function call: %d\n", x);
    modifyValue(x);  // Passes a copy of x
    printf("After function call: %d\n", x);  // Original value remains unchanged
    return 0;
}