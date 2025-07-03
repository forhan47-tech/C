#include <stdio.h>

int main() {
    int arr[] = {10, 2, 3, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = arr[0]; // Initialize difference with first element
    float quotient = (float)arr[0]; // Initialize quotient with first element

    // Iterate through the array
    for (int i = 1; i < size; i++) { // Start from second element
        difference -= arr[i]; // ✅ Subtract each element
        quotient /= arr[i]; // ✅ Divide each element
    }

    printf("Difference of array elements: %d\n", difference);
    printf("Quotient of array elements: %.2f\n", quotient);

    return 0;
}

