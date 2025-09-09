#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;

    for (int i = 0; i < 5; i++) {
        x += i, y += 2 * i, z += 3 * i; // Multiple updates using the comma operator
        printf("x = %d, y = %d, z = %d\n", x, y, z);
    }

    return 0;
}