#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;        // Pointer to num
    int **ptr2 = &ptr;      // Pointer to a pointer

    printf("Value of num: %d\n", **ptr2);    // Access value using pointer to pointer
    printf("Address of num: %p\n", ptr2); // Print address of pointer to pointer
    return 0;
}