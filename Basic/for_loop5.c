#include <stdio.h>

int main() {
    for (int i = 0;; i++) { // Condition is omitted
        printf("Iteration #%d\n", i);
        if (i == 4) {
            break; // Exit the loop when i equals 4
        }
    }

    printf("Loop terminated.\n");

    return 0;
}