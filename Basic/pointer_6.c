#include <stdio.h>

int main() {
    int a = 5, b = 20;
    int *ptr; 

    ptr = &a;  // 'p' points to the address of 'a'
    printf("Value of a: %d\n", *ptr); 

    ptr = &b;  // Now 'p' points to the address of 'b'
    printf("Value of b: %d\n", *ptr); 

    return 0;
}

