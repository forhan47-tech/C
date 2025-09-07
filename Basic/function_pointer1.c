#include <stdio.h>

int* getStaticArray() {
    static int arr[5] = {1, 2, 3, 4, 5}; 
    return arr; 
}

int main() {
    int* myArray = getStaticArray();

    for (int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }
    
    return 0;
}

