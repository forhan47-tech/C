#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4];  // Points to the last element

    printf("Starting at last element: %d\n", *ptr); 

    ptr--;  // Move backward by 1 element
    printf("After moving back: %d\n", *ptr);  

    ptr -= 2;  // Move backward by 2 more elements
    printf("After moving back two more elements: %d\n", *ptr); 

    return 0;
}