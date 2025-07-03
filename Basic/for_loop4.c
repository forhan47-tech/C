#include <stdio.h>

int main() {
    for (;;) { // No initialization, condition, or increment
        printf("This is an infinite loop.\n");
    }

    return 0; // This line is never reached
}