#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == j) {
                continue; // Skip when i equals j
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}