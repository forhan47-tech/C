#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 3) {  // Outer loop
        j = 1;
        while (j <= 3) {  // Inner loop
            printf("(%d, %d) ", i, j);
            j++;
        }
        printf("\n");  // New line after each row
        i++;
    }
    return 0;
}

