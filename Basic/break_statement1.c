#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        printf("i = %d\n", i);
    }

    printf("Loop terminated.\n");
    return 0;
}