#include <stdio.h>

void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10; 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {1, 2, 3, 4, 5};

    printf("Array elements:\n");
    updateArray(data, 5);  
    return 0;
}
