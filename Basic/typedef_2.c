#include <stdio.h>

typedef unsigned int uint;
typedef uint Score;  // Now `Score` is an alias for `unsigned int`

int main() {
    Score playerScore = 450;
    printf("Player Score: %u\n", playerScore);
    return 0;
}