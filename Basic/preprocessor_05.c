#include <stdio.h>

#define DEBUG

#ifdef DEBUG
void logScore(int score) {
    printf("Debug: score = %d\n", score);
}

int main() {
    int score = 42;
    logScore(score);
    return 0;
}
