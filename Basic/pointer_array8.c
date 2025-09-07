#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr + 4; 

    while (ptr >= arr) { 
        printf("%d ", *ptr);
        ptr--; 
    }

    printf("\n"); 
    return 0;
}

