#include <stdio.h>

int main() {
    int cube[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    // Accessing and printing a specific element
    printf("Element at cube[1][0][1]: %d\n", cube[1][0][1]); // Output: 6

    cube[1][0][1] = 4;
    printf("Element at cube[1][0][1] after modification: %d\n", cube[1][0][1]); // Output: 4

    // Printing the entire 3D array
    printf("The 3D array elements are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
            }
        }
    }

    return 0;
}