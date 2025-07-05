#include <stdio.h>

#define LOG(var) printf(#var " = %d\n", var)

int main() {
    int score = 42;
    int lives = 3;

    LOG(score); // Output: score = 42
    LOG(lives); // Output: lives = 3

    return 0;
}
