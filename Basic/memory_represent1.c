#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;      // Pointer to num
    int **ptr2ptr = &ptr; // Pointer to the pointer

    printf("Value of num: %d\n", num);          // Prints 42
    printf("Value of *ptr: %d\n", *ptr);        // Prints 42
    printf("Value of **ptr2ptr: %d\n", **ptr2ptr); // Prints 42

    printf("Address of num: %p\n", &num);       // Address of num
    printf("Value of ptr: %p\n", ptr);          // Address of num
    printf("Value of *ptr2ptr: %p\n", *ptr2ptr);   // Address of num
    printf("Address of ptr: %p\n", &ptr);       // Address of pointer ptr
    printf("Value of ptr2ptr: %p\n", ptr2ptr);  // Address of pointer ptr
    return 0;
}