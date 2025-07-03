#include <stdio.h>

// Function to modify the elements of an array by doubling each value
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Multiply each element by 2
    }
}

int main() {
    // Declare and initialize an integer array
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    // Call the modifyArray function to modify the array elements
    modifyArray(numbers, size);

    // Print the array after modification
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0; // Indicate successful program execution
}