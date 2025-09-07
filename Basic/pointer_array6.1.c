#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    print("Array element: ");
    for (int *ptr = arr; ptr < arr + 5; ptr++) {
        printf("%d ", *ptr);
    }

    printf("\n"); 
    return 0;
}

