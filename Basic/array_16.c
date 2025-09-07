#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 6, 8, 10};  
    int arr2[] = {3, 5, 7, 9, 11};  

    int size = sizeof(arr1) / sizeof(arr1[0]);  
    int product[size];  

    // Perform multiplication
    for (int i = 0; i < size; i++) {
        product[i] = arr1[i] * arr2[i]; 
    }

    printf("Product of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", product[i]);
    }
    printf("\n");

    return 0;
}

