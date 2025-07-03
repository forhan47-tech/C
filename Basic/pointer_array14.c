#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int (*ptr)[3] = &arr; // Pointer to entire array

    printf("First element: %d\n", (*ptr)[0]);
    printf("Second element: %d\n", (*ptr)[1]);

    return 0;
}
