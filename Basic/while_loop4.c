#include <stdio.h>

int main() {
    int count = 0;

    while (1) {  // Infinite loop
        count++;
        printf("Count: %d\n", count);
        if (count >= 5) { 
            break;
        }
    }

    printf("Loop ended.\n");
    return 0;
}