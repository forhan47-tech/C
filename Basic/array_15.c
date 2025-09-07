#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};  
    int arr2[] = {2, 4, 6, 8, 10};      

    int size = sizeof(arr1) / sizeof(arr1[0]);  
    float division[size];  

    // Perform division
    for (int i = 0; i < size; i++) {
        division[i] = (arr2[i] != 0) ? (float) arr1[i] / arr2[i] : 0;  // Avoid division by zero
    }

    printf("Division of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", division[i]);  
    }
    printf("\n");

    return 0;
}

