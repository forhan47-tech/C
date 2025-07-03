#include <stdio.h>

int main() {
    int matrix[3][3] = {  // Original matrix
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    introws = 3, cols = 3;
    int top, bottom, left, right;

    
    // Initialize boundaries
    top = 0;
    bottom = rows - 1;
    left = 0;
    right = cols - 1;

    // Print matrix in spiral order
    printf("Spiral order: ");
    while (top <= bottom && left <= right) {
        // Traverse from left to right (Top Row)
        for (i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Traverse from top to bottom (Right Column)
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Traverse from right to left (Bottom Row)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Traverse from bottom to top (Left Column)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    printf("\n");
    return 0;
}

