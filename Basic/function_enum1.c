#include <stdio.h>

typedef enum {
    LOW = 1,
    MEDIUM,
    HIGH
} Level;

void printLevel(Level l) {
    switch (l) {
        case LOW:    printf("Level is LOW\n"); break;
        case MEDIUM: printf("Level is MEDIUM\n"); break;
        case HIGH:   printf("Level is HIGH\n"); break;
        default:     printf("Unknown level\n");
    }
}

int main() {
    Level current = MEDIUM;
    printLevel(current);
    return 0;
}
