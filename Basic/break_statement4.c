#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                break; // Exit the inner loop when j equals 2
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

    printf("Nested loops terminated.\n");
    return 0;
}