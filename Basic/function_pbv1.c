#include <stdio.h>

void swap(int a, int b) {  // No pointers → Pass by Value
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);  // Passing values, not addresses
    printf("After swap: x = %d, y = %d\n", x, y);  // Values remain unchanged!

    return 0;
}

