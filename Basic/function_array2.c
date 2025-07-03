#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Add a newline for cleaner output
}

int main() {
    // Declare and initialize an integer array
    int numbers[] = {1, 2, 3, 4, 5};

    // Call the printArray function to display array elements
    printArray(numbers, 5); // Passing the array and its size

    return 0; // Indicate successful program execution
}