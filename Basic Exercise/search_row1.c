#include <stdio.h>

void searchRows(int matrix[][4], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                printf("Element %d found in row %d\n", target, i);
                break; // Move to the next row
            }
        }
    }
}

int main() {
    int matrix[3][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    int target = 5;

    searchRows(matrix, 3, 4, target);
    return 0;
}
