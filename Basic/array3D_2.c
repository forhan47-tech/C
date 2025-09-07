#include <stdio.h>

int main() {
    int cube[2][3][4]; 

    printf("Enter the elements of the 3D array:\n");
    for (int i = 0; i < 2; i++) {        
        for (int j = 0; j < 3; j++) {    
            for (int k = 0; k < 4; k++) {
                printf("Enter element for cube[%d][%d][%d]: ", i, j, k);
                scanf("%d", &cube[i][j][k]); 
            }
        }
    }

    printf("\nThe elements of the 3D array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", cube[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}