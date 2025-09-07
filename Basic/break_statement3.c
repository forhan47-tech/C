#include <stdio.h>

int main() {
    int i = 0;

    do {
        if (i == 3) {
            break; // Exit the loop when i equals 3
        }
        printf("i = %d\n", i);
        i++;
    } while (i < 10);

    printf("Loop terminated.\n");
    return 0;
}