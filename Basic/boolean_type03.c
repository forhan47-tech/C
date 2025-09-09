#include <stdbool.h>
#include <stdio.h>

int main() {
    bool isCount = true;
    int count = 0;

    while (isCount) {
        printf("Counter: %d\n", count);
        count++;

        if (count >= 5) {
            isCount = false;  // Stop the loop
        }
    }

    return 0;
}