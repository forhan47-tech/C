#include <stdio.h>

void swap(int *a, int *b) {  // Now using pointers → Pass by Reference
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Passing addresses
    printf("After swap: x = %d, y = %d\n", x, y);  // Values are swapped!

    return 0;
}
