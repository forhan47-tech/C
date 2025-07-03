#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1, *ptr2;  // Declare two integer pointers

    ptr1 = &a;  // Assign address of 'a' to ptr1
    ptr2 = &b;  // Assign address of 'b' to ptr2

    printf("Value of a: %d\n", *ptr1); // Outputs: 10
    printf("Value of b: %d\n", *ptr2); // Outputs: 20

    return 0;
}

