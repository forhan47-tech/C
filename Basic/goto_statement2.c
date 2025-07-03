#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                goto exit_loops; // Exit both loops
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

exit_loops:
    printf("Exited the nested loops.\n");
    return 0;
}