#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    int *ptr = arr;   // Points to the first element

    printf("First element: %d\n", *ptr); // Outputs: 1

    ptr++;            // Moves to the second element
    printf("Second element: %d\n", *ptr); // Outputs: 2

    ptr +=2;         // Moves to the third element
    printf("Third element: %d\n", *ptr); // Outputs: 3

    // Modifying the third element using pointer
    *ptr = 10;       // Changes the value of the third element to 10
    printf("Modified third element: %d\n", arr[2]); // Outputs: 10

    return 0;
}


