#include <stdio.h>

// Global variable accessible by all functions
int score = 0;

void addScore() {
    score += 10;
}

void displayScore() {
    printf("Score: %d\n", score);
}

int main() {
    printf("Initial Score: %d\n", score); // Output: 0

    addScore();      // score becomes 10
    displayScore();  // Output: 10

    addScore();      // score becomes 20
    displayScore();  // Output: 20

    return 0;
}
