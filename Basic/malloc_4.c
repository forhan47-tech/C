#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *ptr = (struct Point *)malloc(sizeof(struct Point));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning values to the struct through the pointer
    ptr->x = 10;
    ptr->y = 20;

    // Printing the values
    printf("Point coordinates: x = %d, y = %d\n", ptr->x, ptr->y);

    // Freeing allocated memory
    free(ptr);

    return 0;
}

