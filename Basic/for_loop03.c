#include <stdio.h>

int main() {
    for (int i = 0;; i++) { // Infinite loop
        printf("Iteration #%d\n", i);
        
        if (i == 4) {
            break; 
        }
    }

    printf("Loop terminated.\n");
    return 0;
}