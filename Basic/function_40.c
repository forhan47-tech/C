#include <stdio.h>

void displayMatrix(int mat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};

    printf("Matrix elements:\n");
    displayMatrix(matrix);  
    return 0;
}
