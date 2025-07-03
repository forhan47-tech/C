#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {10, 20};  // Declaring and initializing a struct
    struct Point *ptr = &p;     // Pointer to the struct
    
    // Accessing members through the pointer
    printf("Point coordinates: x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}

