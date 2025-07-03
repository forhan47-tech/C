#include <stdio.h>

int main() {
    int n = 5;

    // Upper Half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) 
            printf("*");
        for (int j = 0; j < 2 * (n - i - 1); j++) 
            printf(" ");
        for (int j = 0; j <= i; j++) 
            printf("*");
        printf("\n");
    }

    // Lower Half
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) 
            printf("*");
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");
        for (int j = 0; j <= i; j++) 
            printf("*");
        printf("\n");
    }

    return 0;
}
