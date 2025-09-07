#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};  
    int arr2[] = {5, 7, 9, 12, 15};   

    int size = sizeof(arr1) / sizeof(arr1[0]);  
    int diff[size]; 

    // Perform subtraction
    for (int i = 0; i < size; i++) {
        diff[i] = arr1[i] - arr2[i];  
    }

    printf("Difference of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", diff[i]);
    }
    printf("\n");

    return 0;
}

