#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {  // Outer loop
        for (int j = 1; j <= 3; j++) {  // Inner loop
            printf("(%d, %d) ", i, j);
        }
        printf("\n");  // New line after each row
    }
    return 0;
}

