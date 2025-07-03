#include <stdio.h>

struct Point {
    int x;
    int y;
} p1 = {10, 20}, p2 = {30, 40};  // Direct initialization at declaration

int main() {
    // Printing the values
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}

