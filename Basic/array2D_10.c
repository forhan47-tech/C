#include <stdio.h>

int main() {
    int arr[3][3] = {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33}
    };

    printf("Column 2:\n");
    for (int row = 0; row < 3; row++) {
        printf("%d\n", arr[row][1]);  // Access column 2 (index 1)
    }

    return 0;
}
