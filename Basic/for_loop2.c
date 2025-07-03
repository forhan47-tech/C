#include <stdio.h>

int main() {
    int i = 0;

    for (; i < 5;) { // Initialization and increment are omitted
        printf("%d\n", i);
        i++; // Increment moved inside the loop body
    }

    return 0;
}