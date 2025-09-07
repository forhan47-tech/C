#include <stdio.h>

int main() {
    int x = 2; 

    switch (x) {
        case 1:
            printf("Case 1\n");
        case 2:
            printf("Case 2\n"); // No break, so it falls through to the next case                   
        case 3:
            printf("Case 3\n");
        default:
            printf("Default\n");
    }

    return 0;
}