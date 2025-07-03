#include <stdio.h>

int main() {
    int x = 2; // Initialize x with the value 2

    // Switch statement to handle cases
    switch (x) {
        case 1:
            printf("Case 1\n");
            // No break, so it falls through to the next case
        case 2:
            printf("Case 2\n");
            // No break, so it falls through to the next case
        case 3:
            printf("Case 3\n");
            // No break, so it falls through to the default case
        default:
            printf("Default\n");
    }

    return 0;
}