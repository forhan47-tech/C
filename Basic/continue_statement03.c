#include <stdio.h>

int main() {
    int i = 0;

    do {
        i++;
        if (i == 3) {
            continue; // Skip the iteration when i equals 3
        }
        printf("i = %d\n", i);
    } while (i < 5);

    return 0;
}