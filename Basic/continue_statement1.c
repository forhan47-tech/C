#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip the iteration when i equals 3
        }
        printf("i = %d\n", i);
    }
    return 0;
}