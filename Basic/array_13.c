#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};  
    int arr2[] = {6, 7, 8, 9, 10}; 

    int size = sizeof(arr1) / sizeof(arr1[0]);  
    int sum[size];  

    // Perform addition
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i]; 
    }

    printf("Sum of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}

