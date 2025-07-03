#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4];  // Points to the last element (50)

    printf("Starting at last element: %d\n", *ptr);  // Prints 50

    ptr--;  // Move backward by 1 element
    printf("After moving back: %d\n", *ptr);  // Prints 40

    ptr -= 2;  // Move backward by 2 more elements
    printf("After moving back two more elements: %d\n", *ptr);  // Prints 20

    return 0;
}