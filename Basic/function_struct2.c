#include <stdio.h>


struct Point {
    int x, y; 
};

struct Point createPoint(int x, int y) {
    struct Point p = {x, y}; 
    return p; 
}

void displayPoint(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p1 = createPoint(5, 10);

    displayPoint(p1);

    return 0; 
}