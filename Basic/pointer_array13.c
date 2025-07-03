#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printf("Array in reverse order:\n");
    for (int *ptr = arr + 4; ptr >= arr; ptr--) {
        printf("%d ", *ptr);  // Dereference pointer to get the value
    }

    return 0;
}