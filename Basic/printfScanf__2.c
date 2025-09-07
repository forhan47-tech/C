#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (-1 to stop):\n");

    while (1) {  // Infinite loop 
        scanf("%d", &num);
        if (num == -1) break; 
        printf("You entered: %d\n", num);
    }

    printf("Input ended.\n");
    return 0;
}
