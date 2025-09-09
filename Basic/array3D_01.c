#include <stdio.h>

int main() {
    int cube[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    // Accessing and printing a specific element
    printf("Element at cube[0][0][1]: %d\n", cube[0][0][1]);
    printf("Element at cube[1][0][1]: %d\n", cube[1][0][1]);

    // Modify element
    cube[1][0][1] = 4;
    printf("Element at cube[1][0][1] after modification: %d\n", cube[1][0][1]); 

    return 0;
}