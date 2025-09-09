#include <stdio.h>

int main() {
    float A[3][3] = {  
        {10.0, 20.0, 30.0},
        {40.0, 50.0, 60.0},
        {70.0, 80.0, 90.0}
    };

    float B[3][3] = {  
        {2.0, 4.0, 6.0},
        {8.0, 10.0, 12.0},
        {14.0, 16.0, 18.0}
    };

    float C[3][3];  

    // Perform element-wise division
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = (B[i][j] != 0) ? (A[i][j] / B[i][j]) : 0.0; // Avoid division by zero
        }
    }

    printf("Resultant Matrix after Element-wise Division:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", C[i][j]);  
        }
        printf("\n");
    }

    return 0;
}

