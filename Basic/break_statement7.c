#include <stdbool.h>
#include <stdio.h>

int main() {
    bool exit = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("i = %d, j = %d\n", i, j);
            if (i == 1 && j == 1) {
                exit = true;
                break; // Break only the inner loop
            }
        }
        if (exit) {
            break; // Break the outer loop if exit is true
        }
    }

    printf("Exited nested loops.\n");
    return 0;
}