#include <stdio.h>

int* getStaticArray() {
    static int arr[5] = {1, 2, 3, 4, 5}; // Static storage
    return arr;  // Safe to return
}

int main() {
    int* myArray = getStaticArray();
    for (int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }
    return 0;
}

