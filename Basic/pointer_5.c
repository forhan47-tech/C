#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1, p2; // 'p1' is a pointer, 'p2' is an integer

    ptr1 = &a;  // Assign address of 'a' to p1
    p2 = b;   // Assign value of 'b' to p2 (not a pointer!)

    printf("Value of a through pointer p1: %d\n", *ptr1); // Outputs: 10
    printf("Value of p2 (not a pointer): %d\n", p2);    // Outputs: 20

    return 0;
}

