#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    printf("Array elements:\n");
    printArray(numbers, 5); 

    return 0; 
}