#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr + 4; // Point to the last element

    while (ptr >= arr) { // Loop until the pointer reaches the first element
        printf("%d ", *p); // Access the value
        ptr--; // Move to the previous element
    }

    printf("\n"); // Move to the next line for better output formatting
    return 0;
}

