#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 10, upper = 50;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print 5 random numbers within the range
    for (int i = 0; i < 5; i++) {
        int num = rand() % (upper - lower + 1) + lower;
        printf("Random number %d: %d\n", i + 1, num);
    }

    return 0;
}
