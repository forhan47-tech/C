#include <stdio.h>

int main() {
    int cube[2][3][4]; // Declare a 3D array with dimensions 2x3x4

    // Input elements into the 3D array
    printf("Enter the elements of the 3D array:\n");
    for (int i = 0; i < 2; i++) {        // Loop through the first dimension
        for (int j = 0; j < 3; j++) {    // Loop through the second dimension
            for (int k = 0; k < 4; k++) {// Loop through the third dimension
                printf("Enter element for cube[%d][%d][%d]: ", i, j, k);
                scanf("%d", &cube[i][j][k]); // Input element from user
            }
        }
    }

    // Output elements of the 3D array
    printf("\nThe elements of the 3D array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]); // Display element
            }
        }
    }

    return 0;
}