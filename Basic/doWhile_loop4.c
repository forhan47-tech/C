#include <stdio.h>

int main() {
    int count = 1;

    do {
        printf("This is loop iteration #%d\n", count);
        if (count >= 5) {
            break; // Exit the loop when count reaches 5
        }
        count++;
    } while (1); // Still an infinite loop, but it can be stopped

    printf("Loop terminated.\n");

    return 0;
}