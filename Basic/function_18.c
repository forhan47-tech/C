#include <stdio.h>

// Global variable
int globalCount = 0;

void increaseCount() {
    globalCount += 1;
    printf("Increased Count: %d\n", globalCount);
}

void resetCount() {
    globalCount = 0;
    printf("Count Reset to: %d\n", globalCount);
}

int main() {
    increaseCount(); // Count: 1
    increaseCount(); // Count: 2
    resetCount();    // Count: 0
    increaseCount(); // Count: 1 again
    return 0;
}
