#include <stdio.h>

#define DEBUG  // Comment this line to disable debug output

int main() {
    int score = 42;

    #ifdef DEBUG
        printf("Debug: score = %d\n", score);
    #else
        printf("Score recorded.\n");
    #endif

    return 0;
}
