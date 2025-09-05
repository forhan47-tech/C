#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

int main() {
    Color c1 = GREEN;
    printf("Color code: %d\n", c1);  // Output: 1
    return 0;
}
