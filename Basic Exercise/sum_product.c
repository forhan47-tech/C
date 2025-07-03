#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int sum = 0, product = 1;

    // Iterate through array
    for (int i = 0; i < size; i++) {
        sum += arr[i];      // ✅ Adding elements for sum
        product *= arr[i];  // ✅ Multiplying elements for product
    }

    printf("Sum of array elements: %d\n", sum);
    printf("Product of array elements: %d\n", product);

    return 0;
}

