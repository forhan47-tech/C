#include <stdio.h>

#define SIZE 3  // Define matrix size

int main() {
    int matrix[SIZE][SIZE] = {  // Example matrix
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int upperSum = 0, lowerSum = 0;  // Variables to store sums

    // Calculate sums
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j >= i) {  // Upper triangular elements (including diagonal)
                upperSum += matrix[i][j];
            }
            if (j <= i) {  // Lower triangular elements (including diagonal)
                lowerSum += matrix[i][j];
            }
        }
    }

    // Display results
    printf("Upper Triangular Sum: %d\n", upperSum);
    printf("Lower Triangular Sum: %d\n", lowerSum);

    return 0;
}

