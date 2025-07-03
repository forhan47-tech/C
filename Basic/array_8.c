#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20};

    arr[1] = 25;  // Modify second element
    printf("Modified array: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}
