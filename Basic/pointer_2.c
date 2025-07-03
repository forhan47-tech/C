#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;  // Pointer to the variable 'num'.

    // Input using scanf
    printf("Enter a number: ");
    scanf("%d", ptr);  // Input directly modifies 'num'.

    // Output using printf
    printf("Address of num: %p\n", ptr);     // Prints the address.
    printf("Value of num: %d\n", *ptr);      // Prints the value through the pointer.

    return 0;
}