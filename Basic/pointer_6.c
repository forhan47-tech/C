#include <stdio.h>

int main() {
    int a = 5, b = 20;
    int *ptr;  // Pointer declaration

    ptr = &a;  // 'p' points to the address of 'a'
    printf("Value of a: %d\n", *ptr); // Outputs: 5

    ptr = &b;  // Now 'p' points to the address of 'b'
    printf("Value of b: %d\n", *ptr); // Outputs: 20

    return 0;
}

