#include <stdio.h>

int main() {
    int arr[3][3] = {
        {11, 12, 13},
        {21, 22, 23},  // ← This is row 2 (index 1)
        {31, 32, 33}
    };

    printf("Row 2:\n");
    for (int col = 0; col < 3; col++) {
        printf("%d ", arr[1][col]);  // Access row 2 (index 1)
    }

    return 0;
}
