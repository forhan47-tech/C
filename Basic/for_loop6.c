#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {       // Outer loop for rows
        for (int j = 1; j <= i; j++) {     // Inner loop for columns
            printf("%d ", j);
        }
        printf("\n");                      // Move to the next line
    }

    return 0;
}