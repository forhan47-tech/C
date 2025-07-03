#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    while (ptr < arr + 5) { // Loop until the pointer reaches the end of the array
        printf("%d ", *p); // Dereference to access the value
        ptr++; // Move to the next element
    }
    
    printf("\n"); // Move to the next line for better output formatting
    return 0;
}

