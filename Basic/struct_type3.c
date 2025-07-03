#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Positional initialization
    Point p1 = {10, 20};
    Point p2 = {30, 40};

    // Printing values
    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}

